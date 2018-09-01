# ALF_std_pp
A C++ wrapper for the [ALF_standard_lib](https://github.com/AngheloAlf/ALF_Standard_Lib).

## How to use

### Compile the library
- `git clone https://github.com/AngheloAlf/ALF_std_pp.git`
- `cd ALF_Standard_Lib`
- `make`

### Compile against the library
- `gcc *.c *.o -o outputFile -lALF_std` (Put a `-L` and then the location where the lib is if not detected by gcc, example `-L.` for the same folder.)


## TODO's:
- [ ] Create an autoconf and automake
