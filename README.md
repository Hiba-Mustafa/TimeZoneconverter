# Time Zone converter
A C++ program that converts time across different time zones, with auto-correction for country names! 🌍🕒

## What It Does
This project lets you input a country name and a UTC time, and it will:
- Auto-correct misspelled country names (e.g., "itly" → "italy") using Levenshtein distance.
- Adjust the time to the country’s local time based on its timezone offset (e.g., UTC 10:00 AM → Italy 11:00 AM).
- Display the result in a user-friendly format (e.g., "the local time in italy is 11:00:00 AM").

## Features
- Supports over 80 countries with their timezone offsets (e.g., "italy", "canada", "japan").
- Auto-corrects country names using the [Levenshtein distance algorithm]:(https://www.babelstreet.com/blog/drawbacks-of-levenshtein-distance-algorithms-for-name-matching) (e.g., "itly" → "italy").
- Rejects invalid or fictional country names like "Kingdom of Wakanda" with a clear error message.
- Handles 12-hour time format with AM/PM.
- Throws errors for invalid inputs (e.g., negative hours or unknown countries).

## How to Use
1. Clone or download this repository to your computer.
2. Open a terminal in the project folder.
3. Compile the program with a C++ compiler.
4. You can try valid country names (the included countries in the unorder_map), and here's a list of fictional country names to try:
* Narnia (The Chronicles of Narnia: The Lion, the Witch, and the Wardrobe)
* Krakozhia (The Terminal)
* Maldonia (The Princess and the Frog)
* Sokovia (Avengers: Age of Ultron)
* Kingdom of Wakanda (Black Panther) 
* Themyscira / Paradise Island (Wonder Woman)
* Agrabah (Aladdin)
* Atlantica (The Little Mermaid)

## Contributing

Want to add more countries or features? Feel free to fork this repo, make changes, and submit a pull request! I’d love to see your ideas.
