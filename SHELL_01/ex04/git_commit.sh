#!/bin/sh


git log -5 --format=format:"%H" | awk -F: '{print $1}'