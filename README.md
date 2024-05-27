# keyboard-keymaps

Keymap .json, .via and .h files for my keebs

## 🛠️ QMK General Setup

Original Guide: <https://docs.qmk.fm/#/newbs_getting_started>

```bash
sudo apt install -y git pipx # Debian / Ubuntu / Devuan
sudo yum -y install git pipx # Fedora / Red Hat / CentOS
sudo pacman --needed --noconfirm -S git pipx libffi # Arch / Manjaro
```

```bash
mkdir ~/src
pipx install qmk
qmk setup -H ~/src/qmk_firmware
```

## ⌨ ObinsKit/Hexcore Anne Pro 2 (c18) VIA Firmware

### Compile firmware (Linux Only (in my opinion, use WSL))

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
sudo ./util/qmk_install.sh
qmk config user.qmk_home=/home/kism/src/vial-qmk
qmk compile -kb annepro2/c18 -km vial
```

### Flash Firmware

<https://openannepro.github.io/install/>

#### Windows

```powershell
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

<https://get.vial.today/>

## ⌨ KBD67 Lite MKii v3 Vial firmware

<https://github.com/vial-kb/vial-qmk>

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
cd ~/src/vial-qmk
sudo ./util/qmk_install.sh
qmk compile -kb kbdfans/kbd67/mkiirgb/v3 -kb vial
```

<https://get.vial.today/>

## ⌨ Bakeneko65 Vial firmware

<https://github.com/vial-kb/vial-qmk>

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
cd ~/src/vial-qmk
sudo ./util/qmk_install.sh
qmk compile -kb cannonkeys/instant65 -kb vial
```

<https://get.vial.today/>
