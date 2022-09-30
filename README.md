# Hand_Tracker_CVzone
Performing led burning on arduino by analyzing the number of hand movements...

## Visual Flow

![App Screenshot](https://i.hizliresim.com/b282vw2.png)

After processing the camera access and image with Python and obtaining consistent data, it was time to send this data to the other system we created with Arduino with the HC-05 Bluetooth Module. Since I used the HC-05 circuit and codes in 2 other projects, I had no trouble integrating it. I learned that since the LEDs I have are 5mm, they need 100ohm resistors. I attached 100ohm resistors per LED and created my circuit by connecting the long legs to the Arduino slots and the other end to the GND. I used Circuit.io while drawing the circuit. When I add ready-made Arduino sensors and LEDs with Circuit.io, it automatically creates the connecting cables and allows me to save time.


## Deployment

In order to run the project, we need to install the libraries.

```bash
  pip install cvzone
```
```bash
  pip install cv2
```
```bash
  pip install Serial
```


## Screenshots

![App Screenshot](https://i.hizliresim.com/33fustu.png)
## Badges


[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
