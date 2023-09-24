# DConverter

DConverter is a tool for converting digital storage units and this tool is written in C++. <br>
Case Example : You want to convert from Megabyte to Gigabyte. <br><br>
![digital-storage-units](./images/digital_storage_units.png)

## Install
### Linux Distros
- Clone this repository
- Compile using command : <br>
```g++ dconverter.cpp -o dconverter```
- Move the compiled binary to `/usr/local/bin/` directory <br>
```sudo mv dconverter /usr/local/bin```
- You can verify the installation steps using this command <br>
```which dconverter```

![binary](./images/bin.png)

## Usage
- Basics you should know <br>
```dconverter [Source Unit]... [Value]... [Target Unit]...```
- Help <br>
```dconverter -h``` <br><br>
![help](./images/help_usage.png)

- Examples : <br>
  - Convert from Gigabyte to Megabyte <br><br>
![example-1](./images/example-1.png)

  - Convert from Megabyte to Gigabyte <br><br>
![example-2](./images/example-2.png)

Version : 1.0 <br>
written by Bagus Koko Wibawanto
