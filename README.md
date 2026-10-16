# embedded-systems-workspace

Hands-on embedded and systems programming work in C/C++: ARM7 (LPC2129/LPC2148)
and 8051 firmware, Linux system programming, TCP/IP socket applications and data
structures.

## Contents

| Folder | What is in it |
| --- | --- |
| `Arm/` | ARM7TDMI firmware for NXP LPC2129 and LPC2148 (Keil uVision): GPIO, 7-segment multiplexing, LCD, UART, I2C, interrupts and timers. |
| `workshop_arm/` | ARM workshop sessions (March–April 2024), one folder per session, each with its own Keil project. |
| `8051/` | 8051 programs built with Keil C51 (LED patterns, delays, port I/O) plus Proteus schematics. |
| `C/` | C language practice: arrays, pointers, strings, structures, dynamic memory, macros, control flow and pattern programs. |
| `C_FILES/` | File-handling programs in C (copy, delete, grep/wc clones, case conversion). |
| `C++/` | C++ practice: classes, inheritance, templates, exceptions, operator overloading, friends, namespaces, references and console I/O. |
| `Data_structures/` | Singly, doubly and circular linked lists, stack, queue and binary search tree, each with a `makefile`. |
| `sorting/` | Bubble, insertion, selection, merge, quick and heap sort. |
| `Linux/` | Linux system programming: fork/exec, signals, pipes, FIFOs, message queues, shared memory, threads and mutexes. |
| `tcp_ip/` | TCP/UDP socket programs: client/server, concurrent server, multi-client chat and broadcast, with write-ups as PDFs. |
| `loop_back/` | UART loop-back test code. |
| `hacker_rank/`, `blackberry/` | Coding-practice solutions. |

## Toolchains

- **ARM / 8051 firmware:** Keil uVision (`*.uvproj`, `*.uvmpw`, `*.Uv2`). Open the project file and build;
  all generated output (`.o`, `.axf`, `.hex`, `.map`, `.uvopt`, …) is ignored by git.
- **Host programs (C/C++, Linux, sockets, data structures):** GCC on Linux. Folders with a `makefile` build with `make`;
  single-file programs build with `gcc file.c -o file` (add `-lpthread` for the thread examples).
