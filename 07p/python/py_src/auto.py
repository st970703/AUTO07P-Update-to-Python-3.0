#! /usr/bin/env python3

# Some ways to run AUTO:
# a) python auto.py
# b) import auto
#    auto.auto()
# c) from auto import *

if __name__ == "__main__":
    import sys
    import os
    sys.path.append(os.path.dirname(sys.path[0]))

    import AUTOclui
    AUTOclui.auto()
else:
    from .AUTOclui import *
