# ⏱️ Arduino 7-Segment Countdown (59 → 0)

This project demonstrates how to build a **countdown timer (59 → 0)** using two 7-segment LED displays connected to an Arduino.  
Since 7-segment displays do not support true multi-threading, we avoid using `delay()` (which blocks execution).  
Instead, we use the **non-blocking `millis()` function** to handle timing, ensuring smooth countdown operation.

---

## 🔌 Pin Connections

### Display 1 (Tens)
| Segment | Arduino Pin |
|---------|-------------|
| a       | 2 |
| b       | 3 |
| c       | 4 |
| d       | 5 |
| e       | 6 |
| f       | 7 |
| g       | 8 |

### Display 2 (Ones)
| Segment | Arduino Pin |
|---------|-------------|
| a       | 9 |
| b       | 10 |
| c       | 11 |
| d       | 12 |
| e       | 13 |
| f       | A0 |
| g       | A1 |

---

## ⚡ Features
- Counts down from **59 → 0** automatically.
- Uses `millis()` for timing (non-blocking).
- Resets back to **59** after reaching **0**.

---

## 🎥 Demo

![Countdown Demo](demo.mp4)

---

## 📜 License
This project is open-source under the MIT License.
