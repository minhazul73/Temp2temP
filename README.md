# Temperature Converter

This is a simple console-based temperature converter application written in C. It supports conversions between Celsius, Fahrenheit, and Kelvin.

## Features
- Convert temperatures between Celsius, Fahrenheit, and Kelvin.
- User-friendly console interface.
- Unit tests for core conversion logic.
- Clean and modular code structure.

## Project Structure
```
temp_converter/
├── include/
│   ├── converter.h      # Core conversion logic
│   └── ui.h            # User interface
├── src/
│   ├── converter.c
│   ├── ui.c
│   └── main.c
├── tests/
│   └── test_converter.c
├── Makefile
└── README.md
```

## Build and Run
To build the project, run:
```bash
make
```

To run the application:
```bash
./temp_converter
```

To run tests:
```bash
make test
```

## Requirements
- GCC compiler
- Check library for unit testing

## License
This project is licensed under the MIT License.