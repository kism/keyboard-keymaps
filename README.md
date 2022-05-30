# keyboard-keymaps

Keymap .json, .via and .h files for my keebs

## QMK General Setup

```
Debian / Ubuntu / Devuan: sudo apt install -y git python3-pip
Fedora / Red Hat / CentOS: sudo yum -y install git python3-pip
Arch / Manjaro: sudo pacman --needed --noconfirm -S git python-pip libffi
```

```
mkdir ~/src
python3 -m pip install --user qmk
echo 'PATH="$HOME/.local/bin:$PATH"' >> $HOME/.bashrc && source $HOME/.bashrc
qmk setup -H ~/src/qmk_firmware
```

## ObinsKit/Hexcore Anne Pro 2 (c18) VIA Firmware

### Compile firmware (Linux Only (in my opinion, use WSL))

Original guide: https://www.reddit.com/r/AnnePro/comments/txgecj/anne_pro_2_with_via/

```
mkdir ~/src/jpe230_ap2
cd ~/src/jpe230_ap2
git clone -b jpe230_ap2 --single-branch --recursive https://github.com/Jpe230/qmk_firmware.git
cd qmk_firmware
make annepro2/c18:via
```

After compilation the file will be in the current directory with the name `annepro2_c18_via.bin`

### Flash Firmware

https://openannepro.github.io/install/

#### Windows

```
choco install rust
choco install mingw
git clone https://github.com/OpenAnnePro/AnnePro2-Tools.git
cd AnnePro2-Tools.git
cargo build --release
.\annepro2_tools.exe .\annepro2_c18_via.bin
```

#### Linux

```
pacman -S rust gcc make
git clone https://github.com/OpenAnnePro/AnnePro2-Tools.git
cd AnnePro2-Tools.git
cargo build --release
./annepro2_tools annepro2_c18_via.bin
```

### Program firmware

Use vial and sideload the via json 

https://get.vial.today/

https://github.com/Jpe230/qmk_firmware/blob/jpe230_ap2/keyboards/annepro2/keymaps/via/via_ansi_c18.json

## YMDK NP21

TKTKTKTK

## KBD67 Lite MKii v3 Vial firmware

https://github.com/vial-kb/vial-qmk

```
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
make kbdfans/kbd67/mkiirgb/v3:vial
```

https://get.vial.today/
