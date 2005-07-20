eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id$
# -*- perl -*-

use lib '../../../bin';
use PerlACE::Run_Test;

$iorfile = PerlACE::LocalFile ("server.ior");
unlink $iorfile;

# Test A: object exists (_non_existent() returns false)

$SV = new PerlACE::Process ("server", "-o $iorfile");
$CL = new PerlACE::Process ("client", "-k file://$iorfile");

$SV->Spawn ();
if (PerlACE::waitforfile_timed ($iorfile, 5) == -1) {
    print STDERR "ERROR: cannot find file <$iorfile>\n";
    $SV->Kill ();
    exit 1;
}

$client = $CL->SpawnWaitKill (10);
$SV->Kill ();
unlink $iorfile;
if ($client != 2) {
    print STDERR "ERROR: client returned $client in test A, expected 2\n";
    # (see comment about result value in client.cpp)
    exit 1;
}

# Test B: object does not exist (_non_existent() returns true)

$SV = new PerlACE::Process ("server", "-o $iorfile -r");

$SV->Spawn ();
if (PerlACE::waitforfile_timed ($iorfile, 5) == -1) {
    print STDERR "ERROR: cannot find file <$iorfile>\n";
    $SV->Kill ();
    exit 1;
}

$client = $CL->SpawnWaitKill (10);
$SV->Kill ();
if ($client != 3) {
    print STDERR "ERROR: client returned $client in test B, expected 3\n";
    # (see comment about result value in client.cpp)
    unlink $iorfile;
    exit 1;
}

# Test C: server does not run (_non_existent() throws TRANSIENT)

$client = $CL->SpawnWaitKill (10);
unlink $iorfile;
if ($client != 5) {
    print STDERR "ERROR: client returned $client in test C, expected 5\n";
    # (see comment about result value in client.cpp)
    exit 1;
}

exit 0;
