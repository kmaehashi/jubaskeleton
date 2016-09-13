#!/bin/sh

CPLUS_INCLUDE_PATH="$(cd $(dirname ${0}); pwd):${CPLUS_INCLUDE_PATH}" g++ -Wall test.cpp
