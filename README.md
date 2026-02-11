# keyboard-keymaps

Keymap .json, .via and .h files for my keebs

## 🛠️ QMK General Setup

Original Guide: <https://docs.qmk.fm/#/newbs_getting_started>

## ⌨ ObinsKit/Hexcore Anne Pro 2 (c18) VIA Firmware

### Compile firmware (Linux Only (in my opinion, use WSL))

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
./util/docker_build.sh annepro2/c18:vial
```

### Flash Firmware

<https://openannepro.github.io/install/>

#### Windows

```powershell
choco install rust
choco install mingw
git clone https://github.com/OpenAnnePro/AnnePro2-Tools.git
cd AnnePro2-Tools
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

Flash with qmk toolkit.

Configure with <https://get.vial.today/>

## ⌨ KBD67 Lite MKii v3 Vial firmware

<https://github.com/vial-kb/vial-qmk>

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
./util/docker_build.sh kbdfans/kbd67/mkiirgb/v3:vial

```

Flash with qmk toolkit.

Configure with <https://get.vial.today/>

## ⌨ Bakeneko65 Vial firmware

<https://github.com/vial-kb/vial-qmk>

```bash
cd ~/src
git clone https://github.com/vial-kb/vial-qmk.git
./util/docker_build.sh cannonkeys/instant65:vial

```

Flash with qmk toolkit.

Configure with <https://get.vial.today/>

## ⌨ YMDK YMD09 QMK firmware

<[https://github.com/vial-kb/vial-qmk](https://github.com/qmk/qmk_firmware)>

```bash
cd ~/src
git clone https://github.com/qmk/qmk_firmware.git
./util/docker_build.sh ymdk/ymd09:kism
```

The file will be at the root of the repo, the qmk vscode settings will hide it.
Flash with qmk toolkit.
