#! /bin/sh
git status --ignored -s | grep -E '!!' | tr -ds '! ' ''