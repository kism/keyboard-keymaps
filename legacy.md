## ⌨ ObinsKit/Hexcore Anne Pro 2 (c18) VIA Firmware

### Compile firmware (Linux Only (in my opinion, use WSL))

Original guide: https://www.reddit.com/r/AnnePro/comments/txgecj/anne_pro_2_with_via/

```
mkdir ~/src
cd ~/src
git clone -b jpe230_ap2 --single-branch --recursive https://github.com/Jpe230/qmk_firmware.git qmk_firmware-jpe230_ap2
cd ~/src/qmk_firmware-jpe230_ap2
make annepro2/c18:via
```

After compilation the file will be in the current directory with the name `annepro2_c18_via.bin`

### Flash Firmware

https://openannepro.github.io/install/

#### Windows

```bash
choco install rust
choco install mingw
git clone https://github.com/OpenAnnePro/AnnePro2-Tools.git
cd AnnePro2-Tools.git
cargo build --release
.\annepro2_tools.exe .\annepro2_c18_via.bin
```

#### Linux

```bash
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


## ⌨ YMDK NP21

```
make ymdk/np21:via
```

Hold the top left key down while plugging it into your computer and use the qmk toolbox to flash the firmware

https://github.com/qmk/qmk_toolbox/releases

Use vial customise the keymap

Sideload the VIA json: