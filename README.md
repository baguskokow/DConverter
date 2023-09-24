# DConverter

DConverter is a tool for converting digital storage units and this tool is written in C++. <br>
Case Example : You want to convert from Megabyte to Gigabyte. <br>
![digital-storage-units](./images/digital_storage_units.png)

## Install
### Linux Distros
- Clone this repository
- Compile using command : 
```g++ dconverter.cpp -o dconverter```
- Move the compiled binary to `/usr/local/bin/` directory
![binary](./images/bin.png)

- ## Usage
- Basics you should know
```dconvert [Option First Unit]... [Value]... [Option Target Unit]...```
- Help
```dconverter -h``` <br>
![help](./images/help_usage.png)

- Examples :
  - Convert from Gigabyte to Megabyte
![example-1](./images/example-1.png)

- Convert from Megabyte to Gigabyte
![example-2](./images/example-2.png)

Version : 1.0 <br>
written by Bagus Koko Wibawanto
