# acklLibrary

This is my first time writing a library, so please be kind! 

* **Requirement:** C++17 or later is recommended.

---

## Functions

* **`ackl::yncheck()`**
  Get user input and return a `ynoutput` (yes/no/empty/invalid) value.
* **`ackl::cinallclear()`**
  Clear the error flags and discard the input buffer for `std::cin`.
* **`ackl::ifsallclear()`**
  Close the `std::ifstream` and clear its error flags.
  WARNING:CLOSE THE FILE!
* **`ackl::allclearsstream()`**
  Reset the content and clear the error flags of `std::stringstream`.
