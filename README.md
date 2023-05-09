# APT TOOLS

Simple tools written in C that allow shortening of `apt` commands in Debian.

## Usage

### inst:

Used to install packages using `system(sudo apt install <package>)`. This command also updates the catalog before installing using `system(sudo apt update)`.

Usage for this command is as follows:

```
sudo inst <package>
```

### updt:

Used to update the software catalog using `system(sudo apt update)`.

Usage for this command is as follows:

```
sudo updt
```

### upgr:

Used to upgrade system software using `system(sudo apt upgrade)`.

### updt:

Used to update the software catalog using `system(sudo apt update)`.

Usage for this command is as follows:


To upgrade all packages with available upgrades:
```
sudo upgr
```

To upgrade a specific package:
```
sudo upgr <package>
```


## Contributions

All contributions to this project are welcome! Please feel free to reach out if you would like to contribute!