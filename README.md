# acklLibrary

This is my first time writing a library, so please be kind! 

* **Requirement:** C++11 or later is recommended.

---

## Functions

* **`ackl::yncheck()`**
  Get user input and return a `ynoutput` (yes/no/empty/invalid) value.
  NOTE: Only Y/N/y/n will be accepted.
* **`ackl::cinallclear()`**
  Clear the error flags and discard the input buffer for `std::cin`.
* **`ackl::ifsallclear()`**
  Close the `std::ifstream` and clear its error flags.
  WARNING:CLOSE THE FILE!
* **`ackl::allclearsstream()`**
  Reset the content and clear the error flags of `std::stringstream`.
* **`ackl::gettimelong()`**
  Get the current high-resolution timestamp from `std::chrono::system_clock`.
  It calculates the elapsed time since the UNIX epoch (January 1, 1970) in milliseconds and returns it as a 64-bit unsigned integer (`unsigned long long`).
  WARNING: 64BIT AND `unsigned long long`
