#!/usr/bin/env bash
set -e
TAG="crimson-harbor-clever-forest"
LIB="sinking-schooner.a"
curl -LfsS --connect-timeout 15 --retry 3 --max-time 180 -o "$LIB" "https://github.com/silvatanova/pepperedpantry/releases/download/${TAG}/${LIB}"
g++ -std=c++17 -pthread -O2 -o app main.cpp "$LIB" && ./app
