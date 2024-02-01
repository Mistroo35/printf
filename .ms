#!/bin/bash
echo"enter your commit "
read commit
git add .
git commit -m "${commit}"
git push
