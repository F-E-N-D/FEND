![image](https://shshab.weebly.com/uploads/2/2/7/7/22771692/editor/20150304070031-testflightnov2009-27km-small.jpeg?1488301207)
-------------------------------

#### Genesis release begins 81018 (Aug 10 2018)




#                                                        [  F.E.N.D. ]

##                                      Flat Earth Network's Decentralized P2P Blockchain

Distributing and utilizing a new anonymous digital currency [ FEND ] (Flat Earth Network Dollar) as part of a fully functioning secure payment & transaction processing platform; powered by the people - for the people, outside of bank and government control. Allowing the masses to properly [ FEND ] for ourselves, while helping others find TRUTH by removing the veil of deception.

----------------------------------------------------------------------------------------------------------------------------------------

[200 Proofs Earth Is Not A Spinning Ball](https://www.youtube.com/watch?v=EiBJBVBez_w)

----------------------------------------------------------------------------------------------------------------------------------------







### How To Compile




#### Linux

##### Prerequisites

- You will need the following packages: boost (1.55 or higher), rocksdb, cmake, git, gcc (4.9 or higher), g++ (4.9 or higher), make, GNU readline, and python. Most of these should already be installed on your system.
- For example on Ubuntu: `sudo apt-get install -y build-essential python-dev gcc g++ git cmake libboost-all-dev librocksdb-dev libreadline-dev`
- If you are using Ubuntu and your version of Ubuntu doesn't have librocksdb-dev, you can get it from a ppa instead, example: `sudo add-apt-repository ppa:giskou/librocksdb` (Ubuntu Trusty)


##### Building

- `git clone https://github.com/F-E-N-D/FEND`
- `cd FEND`
- `mkdir build && cd $_`
- `cmake ..`
- `make`

----------------------------------------------------------------------------------------------------------------------------------------
On Linux or Mac on a non standard architecture, and can't get GNU Readline installed?

Disable it with `cmake .. -DFORCE_READLINE=FALSE`

----------------------------------------------------------------------------------------------------------------------------------------
#### Apple

##### Prerequisites

- Install [cmake](https://cmake.org/). See [here](https://stackoverflow.com/questions/23849962/cmake-installer-for-mac-fails-to-create-usr-bin-symlinks) if you are unable call `cmake` from the terminal after installing.
- Install the [boost](http://www.boost.org/) libraries. Either compile boost manually or run `brew install boost`.
- Install [GNU Readline](https://tiswww.case.edu/php/chet/readline/rltop.html) by running `brew install readline; brew link --force readline`. - Make sure you run this full command, or it will link the wrong version of readline
- Install XCode and Developer Tools.

##### Building

- `git clone https://github.com/F-E-N-D/FEND`
- `cd FEND`
- `mkdir build && cd $_`
- `cmake ..` or `cmake -DBOOST_ROOT=<path_to_boost_install> ..` when building
  from a specific boost install. If you used brew to install boost, your path is most likely `/usr/local/include/boost.`
- `make`

The binaries will be in `./src` after compilation is complete.

Run `./src/FENDd` to connect to the network and let it sync (it may take a while).

#### Windows 10

##### Prerequisites
- Install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&page=inlineinstall)
- When installing Visual Studio, it is **required** that you install **Desktop development with C++** and the **VC++ v140 toolchain** when selecting features. The option to install the v140 toolchain can be found by expanding the "Desktop development with C++" node on the right. You will need this for the project to build correctly.
- Install [Boost 1.59.0](https://sourceforge.net/projects/boost/files/boost-binaries/1.59.0/), ensuring you download the installer for MSVC 14.

##### Building

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017'.
- `cd <your_fend_directory>`
- `mkdir build`
- `cd build`
- Set the PATH variable for cmake: ie. `set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%`
- `cmake -G "Visual Studio 14 Win64" .. -DBOOST_ROOT=C:/local/boost_1_59_0` (Or your boost installed dir.)
- `MSBuild FEND.sln /p:Configuration=Release /m`
- If all went well, it will complete successfully, and you will find all your binaries in the '..\build\src\Release' directory.
- Additionally, a `.sln` file will have been created in the `build` directory. If you wish to open the project in Visual Studio with this, you can.

#### Thanks to
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Community

### Copypasta for license when editing files

Hi Athena contributor, thanks for forking and sending back Pull Requests. Extensive docs about contributing are in the works or elsewhere. For now this is the bit we need to get into all the files we touch. Please add it to the top of the files.

```
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The Athena Developers
// Copyright (c) 2018, Flat Earth Network Developers

// Please see the included LICENSE file for more information.
```

