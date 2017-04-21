footer:@johnsonch :: Chris Johnson :: Starting with Particle.io
autoscale: true

# Getting Started with Photon
## Blinking lights for fun

---
# Who am I?

### Chris Johnson
### @johnsonch => most places on the internet

---
# Disclaimer

---
## IoT LOL WUT?

---
# What is a Photon

---
# Who is Particle

---
# Where can I get stuff?
* [store.particle.io](https://store.particle.io/)
* [Amazon](https://www.amazon.com/Particle-Maker-over-components-Learning/dp/B01HZFS0PE/ref=sr_1_3?ie=UTF8&qid=1492801419&sr=8-3&keywords=particle)
* [Getting Started with the Photon](https://www.amazon.com/Getting-Started-Photon-Affordable-Hackable/dp/1457187019/ref=pd_sim_328_2?_encoding=UTF8&pd_rd_i=1457187019&pd_rd_r=9PZMMZ7B9V11P9KTT2TX&pd_rd_w=0TPLW&pd_rd_wg=vXMlx&psc=1&refRID=9PZMMZ7B9V11P9KTT2TX)

---
# What are we going to build?

## Build status light

---
![left](https://cdn.travis-ci.org/images/logos/TravisCI-Mascot-1-20feeadb48fc2492ba741d89cb5a5c8a.png)

![right](https://www-assets.particle.io/images/particle-mark.png)

---
# How do you get started?
* Buy some hardware
* Signup at [https://www.particle.io/](https://www.particle.io/)
* Download the smartphone app

---
# Tinker Mode

---
# Let's try it out

---
## Tinker Demo
### Setting up the Photon

* This is also how you connect to a new WI-FI, just make sure you don't skip ahead and connect to the devices network before hitting ready on this screen.

![fit right](./images/IMG_0357.PNG)

^ The smart phone app guides you very well

---
## Tinker Demo
### Setting up the Photon

* The device emits it's own wireless network for setup.

![fit right](./images/IMG_0358.PNG)

---
![fit](./images/IMG_0359.PNG)

![fit](./images/IMG_0360.PNG)

![fit](./images/IMG_0361.PNG)

---
## Tinker Demo
### Setting up the Photon

* They give you funky names, you can however rename it if you want

![fit right](./images/IMG_0362.PNG)

---
## Tinker Demo
### Playing with your device

* Tinker mode gives you a gives you a virtual interface to your board.
* We have two lites already attached to our bread board, let's light up the Red one

![fit right](./images/IMG_0363_0364.PNG)


---
## Tinker Demo
### Playing with your device

* We blinked a light over the internet!

![fit right](./images/IMG_0365.JPG)

---
# That's cool but...
## I can't just watch the build status and click a button

---
# To the cloud

![](./images/pexels-photo-68564.jpeg)

---
# build.particle.io

* Online editor
* JavaScript based DSL
* [https://build.particle.io](https://build.particle.io)

![fit right](./images/2017-04-21 at 3.26 PM.png)

---
# Sample App

* They have a few, we'll try the `BLINK AN LED` app

![fit right](./images/2017-04-21 at 3.27 PM.png)

---
# Sample App

* To send it to our Photon we just need to `flash` the device
* Well it is sending to our device let's look at the code

![fit right](./images/2017-04-21 at 3.28 PM.png)

---

```javascript
int led1 = D0;
int led2 = D7;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible,
// after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen
// (like dropping the network connection).  The built-in delay function shown below safely
// interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // To blink the LED, first we'll turn it on...
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  // We'll leave it on for 1 second...
  delay(1000);

  // Then we'll turn it off...
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  // Wait 1 second...
  delay(1000);

  // And repeat!
}

```
[Direct Link](./code_samples/blink-an-led.ino)

---

![](./images/IMG_0368.MOV)

---
# Issues I ran into
* My lack of experience physically working with electronics
*
