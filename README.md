# DOOM with FPGA HW ACCELERATION

Cite the work using:

```
@inproceedings{surianolima2020doom,
  title={Accelerating a Classic 3D Video Game on Heterogeneous Reconfigurable MPSoCs},
  author={Suriano, Leonardo and Lima, David and de la Torre, Eduardo},
  booktitle={International Symposium on Applied Reconfigurable Computing},
  pages={136--150},
  year={2020},
  organization={Springer}
}
```

Also on [Hackster](https://www.hackster.io/electronicsleonardo/doom-with-hardware-accelerators-on-fpga-d1733f) you can find some of other information.

## Instruction to run the DOOM using 8 HW accelerator on the FPGA

* You must create your system following the instructions (and using the scripts) provided [here](https://github.com/leos313/DOOM_FPGA).

* You must have root priviledge for using HW:
```
sudo su
```

* The Hardware accelerators were already created. You need to upload the bitstream on the FPGA of the system:
```
cp bistreams/stretch2x_8hw_100MHz.bin /lib/firmware
echo stretch2x_8hw_100MHz.bin > /sys/class/fpga_manager/fpga0/firmware 
```

* download the repo:
```
git clone https://github.com/leos313/crispy-doom
```

* configure and build the system using the provided scripts:
```
source compile_game_with_HW.sh
```

* download the wad file from the [website](https://www.pc-freak.net/blog/doom-1-doom-2-doom-3-game-wad-files-for-download-playing-doom-on-debian-linux-via-freedoom-open-source-doom-engine/) and place it (`doom1.wad`) within the folder `src`.

* You can run the game and play using the keybord:
```
./src/crispy-doom-setup -iwad src/doom1.wad
```

**Please note**: I normally use `Configure Display` -> `1920x1080` -> `Save parameters and launch DOOM`.

## Original README of crispy-doom 3.0

Chocolate Doom aims to accurately reproduce the original DOS version of
Doom and other games based on the Doom engine in a form that can be
run on modern computers.

Originally, Chocolate Doom was only a Doom source port. The project
now includes ports of Heretic and Hexen, and Strife.

Chocolate Doom's aims are:

 * To always be 100% Free and Open Source software.
 * Portability to as many different operating systems as possible.
 * Accurate reproduction of the original DOS versions of the games,
   including bugs.
 * Compatibility with the DOS demo, configuration and savegame files.
 * To provide an accurate retro "feel" (display and input should
   behave the same).

More information about the philosophy and design behind Chocolate Doom
can be found in the PHILOSOPHY file distributed with the source code.

== Setting up gameplay ==

For instructions on how to set up Chocolate Doom for play, see the
INSTALL file.

== Configuration File ==

Chocolate Doom is compatible with the DOS Doom configuration file
(normally named 'default.cfg'). Existing configuration files for DOS
Doom should therefore simply work out of the box. However, Chocolate
Doom also provides some extra settings. These are stored in a
separate file named 'chocolate-doom.cfg'.

The configuration can be edited using the chocolate-setup tool.

== Command line options ==

Chocolate Doom supports a number of command line parameters, including
some extras that were not originally suported by the DOS versions. For
binary distributions, see the CMDLINE file included with your
download; more information is also available on the Chocolate Doom
website.

== Playing TCs ==

With Vanilla Doom there is no way to include sprites in PWAD files.
Chocolate Doom's '-file' command line option behaves exactly the same
as Vanilla Doom, and trying to play TCs by adding the WAD files using
'-file' will not work.

Many Total Conversions (TCs) are distributed as a PWAD file which must
be merged into the main IWAD. Typically a copy of DEUSF.EXE is
included which performs this merge. Chocolate Doom includes a new
option, '-merge', which will simulate this merge. Essentially, the
WAD directory is merged in memory, removing the need to modify the
IWAD on disk.

To play TCs using Chocolate Doom, run like this:

  chocolate-doom -merge thetc.wad

Here are some examples:

  chocolate-doom -merge batman.wad -deh batman.deh vbatman.deh  (Batman Doom)
  chocolate-doom -merge aoddoom1.wad -deh aoddoom1.deh  (Army of Darkness Doom)

== Other information ==

 * Chocolate Doom includes a number of different options for music
   playback. See the README.Music file for more details.

 * More information, including information about how to play various
   classic TCs, is available on the Chocolate Doom website:

     http://www.chocolate-doom.org/

   You are encouraged to sign up and contribute any useful information
   you may have regarding the port!

 * Chocolate Doom is not perfect. Although it aims to accurately
   emulate reproduce the DOS executables, some behavior can be very
   difficult to reproduce. Because of the nature of the project, you
   may also encounter Vanilla Doom bugs; these are intentionally
   present; see the NOT-BUGS file for more information.

   New bug reports can be submitted to the issue tracker on Github:

     https://github.com/chocolate-doom/chocolate-doom/issues

 * Source code patches are welcome, but please follow the style
   guidelines - see the file named HACKING included with the source
   distribution.

 * Chocolate Doom is distributed under the GNU GPL. See the COPYING
   file for more information.

 * Please send any feedback, questions or suggestions to
   fraggle@gmail.com. Thanks!

# vim: tw=70

