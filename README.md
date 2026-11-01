# Keychain-project

This repository holds the open-source hardware and firmware design files for my **Hack Club Half-Life** week 4 project submission. This project was done because I have wanted to build something like this.

This week my goal was to make a keychain with an oled display which would display words. I used Kicad to build the schematics and then finally built the pcb by referring to the oled guide and by also using my experience of building the week 1 project. There was not much customizations but I arranged it in a layout which I thought would make it more compact. I used the XIAO ESP32-C3 as my microcontoller and Arduino IDE was used for the firmware. The guide had provided libraries from where I could refer code and code my controller. I also added a rechargeable battery and a slide switch to turn it on or off.


## 📁 Repository Structure
* `/pcb` - KiCad schematics, layouts, and manufacturing outputs.
* `/firmware` - Arduino IDE configuration code files.

<img width="950" height="591" alt="pcb" src="https://github.com/user-attachments/assets/3e436bbc-13fe-42c8-aeba-f41e00005a51" />


# **Schematic of PCB**
<img width="1251" height="771" alt="schem" src="https://github.com/user-attachments/assets/49ad9d3a-b51d-420b-900f-fef9ac0ac499" />



# **3D View**
<img width="1374" height="916" alt="3d" src="https://github.com/user-attachments/assets/4dd233f7-00e5-43b1-b170-4e896b9d54a9" />



## BUTTONS

**Button 1**: Allows to display different things as per the code

**Button 2**: On or off switch



# BOM(Bill of Materials)

|Item|Qty|Supplier|Cost/item|Total Cost|
|---|---|---|---|---|
|XIAO ESP32 C3|1|[Sharvi](https://sharvielectronics.com/product/seeed-studio-xiao-esp32c3-tiny-mcu-board-with-wifi-and-ble-battery-charge-supported-module/)|$6.70|$6.70|
|0.96 OLED|1|[Sharvi](https://sharvielectronics.com/product/0-96-inch-i2c-4pin-oled-display-module-white/)|$2.20|$2.20|
|3.7V Lipo Rechargeable|1|[Sharvi](https://sharvielectronics.com/product/3-7v-1100mah-lipo-rechargeable-battery-with-jst-ph-2mm-connector/)|$2.28|$2.28|
|4.7K Ohm Resitstors|2|[Sharvi](https://sharvielectronics.com/product/4-7k-ohm-1-8-watt-resistor-1-tolerance-cr-05ftp-4k7-0805-package/)|$0.085|$0.17|
|100nF 50V Capacitor|1|[Sharvi](https://sharvielectronics.com/product/0-1uf-100nf-50v-capacitor-%c2%b110-tolerance-cc0805kkx7r9bb104-0805-package/)|$0.021|$0.021|
|10uF/10000nF 25V Capacitor|1|[Sharvi](https://sharvielectronics.com/product/10uf-10000nf-25v-capacitor-%c2%b110-tolerance-cc0805kkx7r8bb106-0805-package/)|$0.029|$0.029|
|Push Button|3|[Sharvi](https://sharvielectronics.com/product/6x6x6mm-4-pin-smd-push-button-switch-black-smd-package/)|$0.093|$0.279|
|Slide Switch|1|[Sharvi](https://sharvielectronics.com/product/mini-slide-switch-7pin-smd-2-positions-h1-5mm-1p2t-spdt/)|$0.63|$0.63|
|4Pin Female Berg Strip|1|[Sharvi](https://sharvielectronics.com/product/4x1-4pin-female-berg-strip-break-away-header-straight-2-54mm-pitch/)|$0.66|$0.66|
|2Pin SMD Horizontal Connector|1|[Sharvi](https://sharvielectronics.com/product/ph-02awt-2pin-smd-horizontal-connector-with-side-entry-header-2mm-pitch/)|$0.41|$0.41|
|PCB|1|[Seeed Studio](https://www.seeedstudio.com/fusion_pcb.html)|$9.90|$9.90|
|Estimated total shipping||||$7.41|


