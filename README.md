# LED-stairs
Stair's lighting with WS2812b and Arduino. In this case stairs got 13 steps with different lenght. Used LED strip is 1m long with 30 LED’s.

## Schematic

To provide enough power to LED’s each one of LED strip is connected to power supply to avoid voltage drops. Power supply should secure 9W per 30 LED’s. In this case it’s above 117W with 5V DC power. All LED’s are connected in serial mode through 1-wire. This type of connection provide that all LED’s is detecting as one long strip. It’s only required one Arduino digital output. 

![Schematic]("https://github.com/ArtystaMalarz/LED-stairs/blob/main/led%20connection.png?raw=true")

## Implementation

