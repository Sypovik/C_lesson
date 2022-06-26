#!/bin/bash

mkdir ./"lesson$*"
touch ./"lesson$*/code$*.c"
cp ./"script.sh" ./"lesson$*/go.sh"

