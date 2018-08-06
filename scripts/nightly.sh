#!/usr/bin/env bash

# nightly.sh - pull a copy of FEND-master 
# and put it inside a timestamped folder.
# rock made this

sourcefolder=~/Source/fend-dev-build-$(date +%F)

mkdir ~/Source
mkdir ~/Binaries
echo -e "\n MOVING TO ~/Source"
cd ~/Source/
ls -al

echo -e "\n CLONING FEND in $sourcefolder"
git clone https://github.com/F-E-N-D/FEND $sourcefolder
cd $sourcefolder
mkdir -p $sourcefolder/build && cd $sourcefolder/build
ls -al

echo -e "\n BUILDING FEND"
cmake .. && make -j8 # remove -j8 for single core
cd src
ls -al

echo -e "\n\n COMPRESSING BINARIES"
zip fend-dev-bin-$(date +%F)-linux.zip solominer legacy-services simplewallet fend services
mv *.zip ~/Binaries/
cd ~/Binaries
ls -al

echo -e "\n COMPLETE!"
