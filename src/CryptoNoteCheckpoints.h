// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
{     9, "96a8788bfec93e6175b5e4f17d0f568f90f7d501a67e5946036bdc85c056c969"},
{  1000, "e5be461a9bb1e02451f31002b967f6be1e373930929ceca1f5f6357c90e9e652"},
{  5000, "08de10f54054b59dcd2e0726f2f84591b8d4fcd4ad1d469f0351b02c274ead8b"},
{  9000, "ba4a3e647b27febeaf3db6317fc87dbc402236d9596b2360315b164edb26174f"},
{ 15000, "f8e60b1aa9a06a4f3ed2e8d46d7464e39ff18bb307d5d0c9361c89e9138bd6c7"},
{ 20000, "e7c225d8fcc11091095d2ec4914bc32c4f52d1585424a1d5b0c6f7de196ba144"},
{ 25000, "f14fc46f1b7e8a6ef027ad60855d31a41f448a2b9a606d67d5afd5d0218d69d1"},
{ 30000, "cbdaf11997343128af5b17656995c433e1c821692adb1c6b83390e6911783b60"},
{ 35000, "f199a1f0fb461fe87ba33d38ba957aecd684578b6f19d3e86f91eb4512ae6c44"},
{ 40000, "6d4f6ec62f3738e7b837807f1fc04ec5680665e78cbd1a6d35c793389490fc22"},
};
}
