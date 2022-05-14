# keyboard-keymaps
Keymap .json and .h files for my keebs

## ObinsKit/Hexcore Anne Pro 2 (c18) VIA Firmware

### Compile firmware (Linux Only (in my opinion, use WSL))

Original guide: https://www.reddit.com/r/AnnePro/comments/txgecj/anne_pro_2_with_via/

```pacman -S rust gcc make

https://openannepro.github.io/install/

```make annepro2/c18:via

### Flash Firmware 

#### Windows

```choco install rust

```choco install mingw

```git clone git@github.com:OpenAnnePro/AnnePro2-Tools.git

```cd AnnePro2-Tools.git

```cargo build --release

```.\annepro2_tools.exe .\annepro2_c18_via.bin

#### Linux

```pacman -S rust gcc make

```git clone git@github.com:OpenAnnePro/AnnePro2-Tools.git

```cd AnnePro2-Tools.git

```cargo build --release

```./annepro2_tools.exe annepro2_c18_via.bin

### Program firmware

Use vial and sideload the via json https://get.vial.today/

https://github.com/Jpe230/qmk_firmware/blob/jpe230_ap2/keyboards/annepro2/keymaps/via/via_ansi_c18.json

## YMDK NP21

TKTKTKTK

## KBD67 Lite MKii v3 Vial firmware

https://github.com/vial-kb/vial-qmk

```make kbdfans/kbd67/mkiirgb/v3:vial

https://get.vial.today/
