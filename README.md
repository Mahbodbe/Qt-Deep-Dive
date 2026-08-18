# 🚀 Qt Deep Dive

<p align="center">
  <img src="https://img.shields.io/badge/Qt-5.x%20%7C%206.x-41CD52?style=for-the-badge&logo=qt&logoColor=white" alt="Qt" />
  <img src="https://img.shields.io/badge/C%2B%2B-17%20%2F%2020-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio%20%7C%20Qt%20Creator-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white" alt="VS" />
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-107C41?style=for-the-badge&logo=windows&logoColor=white" alt="Cross-Platform" />
  <img src="https://img.shields.io/badge/Focus-Production--Grade%20GUI-blueviolet?style=for-the-badge" alt="Production-Grade GUI" />
</p>

<p align="center">
  <b>A practical, deep-dive journey into modern desktop application architecture with Qt (C++) and QML.</b><br/>
  From core widgets, cross-platform hardware monitors, and custom QSS dark styling to model/view databases, multi-threading, IPC, plugins, and Qt Quick animations.
</p>

<p align="center">
  🌐 <b>Languages:</b> English (Primary) | <a href="README_FA.md"><b>🇮🇷 مطالعه نسخه فارسی (Persian Version)</b></a>
</p>

---

## 📌 Overview

This repository is a step-by-step documentation and engineering log of mastering the **Qt Framework (C++)**. Every project is developed from foundational concepts up to production standards:
- **Beyond raw tutorials**: Re-architecting standard examples using modern C++17/20 idioms.
- **Custom UI Modernization**: Redesigning raw Qt default styling with custom, sleek **Dark Themes (QSS)**.
- **Signal/Slot Best Practices**: Safe, modern signal/slot connections, lambda-based interceptors, and strict memory ownership.

---

## 📚 Core References & Methodology

Our roadmap and implementation design rest upon two foundational pillars:

### 1. Primary Academic & Structural Reference
The architectural blueprint, chapter sequence, and core projects follow:

> **Mastering Qt 5**  
> *Create stunning cross-platform applications using C++ with Qt Widgets and QML with Qt Quick*  
> **Second Edition**  
> ✍️ **Authors:** Guillaume Lazar & Robin Penea  
> 🏢 **Publisher:** Packt Publishing

### 2. Secondary Foundation: AI Collaboration & Architectural Review
Modernization decisions, code reviews, design-system suggestions, and polished dark stylesheets (QSS) are developed through collaborative brainstorming with **AI Engineering Assistants**, ensuring compliance with modern C++ standards and contemporary desktop UI/UX paradigms.

---

## 🗺️ Comprehensive 14-Chapter Roadmap

Aligned with *Mastering Qt 5 (2nd Edition)* + Custom Modernization Enhancements:

| # | Chapter / Topic | Key Project / Technology | Custom AI / Modern Enhancement | Status |
|:---:|:---|:---|:---|:---:|
| **01** | **Get Your Qt Feet Wet** | **Modern ToDo Application** (`todo` + `Task`) | Custom Dark QSS Theme, Neon Gradients, Lambda Signals | 🟢 Completed |
| **02** | **Discovering qmake Secrets** | **Cross-Platform SysInfo Monitor** (`SysInfo` + Qt Charts) | Polymorphic OS Singleton, Realtime Area & Donut Charts, Qt 6.2+ Namespacing | 🟢 Completed |
| **03** | **Dividing Your Project & Ruling Code** | **Gallery Core Library** (Architecture, SQLite, DAO, Models) | Multi-project `.pro` / CMake structure, Clean DAO Layer | 🟡 In Progress |
| **04** | **Conquering Desktop UI** | **Desktop Gallery UI** (Model/View, Custom Delegates) | Responsive thumbnail grid, smooth animations | ⚪ Planned |
| **05** | **Dominating Mobile (Android/iOS)** | **Mobile Gallery Application** (QML + Qt Quick) | Native mobile gesture support, touch-friendly UI | ⚪ Planned |
| **06** | **Qt Quick & QML Fluid Interfaces** | **Snake Game Engine** (Canvas, QML Canvas, JS Engine) | Particle effects, fluid 60 FPS state machine | ⚪ Planned |
| **07** | **Third-Party Libraries & OpenCV** | **Image Filter App** (Qt + OpenCV Integration) | Custom OpenCV pipeline, image processing filters | ⚪ Planned |
| **08** | **Extensibility with Qt Plugins** | **Modular Filter Studio** (`QPluginLoader`, Dynamic DLLs) | Hot-swappable DLL filters, SDK architecture | ⚪ Planned |
| **09** | **Multithreading & Concurrency** | **Mandelbrot Explorer** (`QThreadPool`, `QRunnable`) | Lock-free worker pool, non-blocking render thread | ⚪ Planned |
| **10** | **Inter-Process Communication (IPC)** | **Distributed Mandelbrot Worker** (`QLocalSocket` / IPC) | Worker daemon process, local socket messaging | ⚪ Planned |
| **11** | **Audio Synthesis & Serialization** | **Drum Machine Suite** (`QAudioOutput`, JSON/XML/Binary) | Multi-format polymorphic serializer, low-latency audio | ⚪ Planned |
| **12** | **Automated Testing & TDD** | **Drum Machine Test Suite** (`QTest`, Benchmarks, CI) | Unit tests, signal spies, GUI event simulation | ⚪ Planned |
| **13** | **Packaging & Deployment** | **Cross-Platform Installer** (`windeployqt`, `macdeployqt`) | Standalone distributable bundles, dynamic link resolution | ⚪ Planned |
| **14** | **Qt Quick Controls 2 & Styling** | **Modern Fluid Desktop Suite** (QQC2 + Material/Universal) | Adaptive Material / Universal theme engine | ⚪ Planned |

---

## 📂 Implemented Projects Spotlight

### 🔹 Chapter 1: Modern ToDo Application (`fasl 1 / todo`)

A modular, component-driven task management suite featuring dynamic widget instantiation, strict ownership hierarchy, and a handcrafted modern dark skin.

#### 💡 Key Highlights:
- **Type-Safe Signals & Slots**: Modern C++ pointer-to-member syntax avoiding legacy macro overhead:
  ```cpp
  connect(task, &Task::removed, this, &todo::removeTask);
  connect(task, &Task::statusChanged, this, &todo::taskStatusChanged);
  ```
- **Contextual Lambda Capture**: Intercepting and decorating task removal events before propagating signals:
  ```cpp
  auto prettyName = [](const QString& taskName) -> QString {
      return "-------- " + taskName.toUpper();
  };
  connect(ui->removeButton, &QPushButton::clicked, [this, name, prettyName] {
      qDebug() << "Trying to remove" << prettyName(name);
      this->emit removed(this);
  });
  ```
- **Hierarchical Memory Management**: Composite `Task` instances dynamically added into `QVBoxLayout` and safely managed with `QVector<Task*>`.
- **Handcrafted Cyber Dark QSS Skin**: Designed in collaboration with AI, featuring neon purple/indigo gradients (`#6366f1` → `#8b5cf6`), soft rounded input fields, interactive hover states, custom scrollbar tracks, and live completion badge counters.

<details>
<summary>📸 <b>View Chapter 1 Before & After Screenshots</b></summary>
<br/>

| Classic Book Style (Base) | Modernized Output (Final) |
|:---:|:---:|
| <img src="fasl%201/todo/todo/image/oldMain.png" width="380" alt="Old Main"/> | <img src="fasl%201/todo/todo/image/newMain.png" width="380" alt="New Main"/> |
| <img src="fasl%201/todo/todo/image/oldAdd.png" width="380" alt="Old Add"/> | <img src="fasl%201/todo/todo/image/newAdd.png" width="380" alt="New Add"/> |
| <img src="fasl%201/todo/todo/image/oldEdit.png" width="380" alt="Old Edit"/> | <img src="fasl%201/todo/todo/image/newEdit.png" width="380" alt="New Edit"/> |

</details>

---

### 🔹 Chapter 2: Cross-Platform Hardware Monitor (`fasl 2 / ch02-sysinfo`)

A real-time hardware telemetry dashboard capturing CPU load and RAM utilization across Windows, Linux, and macOS using OS-native APIs, polymorphic singletons, and Qt Charts data visualization.

#### 💡 Key Highlights:
- **Polymorphic Singleton Pattern**: Abstract `SysInfo` interface dynamically bound at runtime to OS-specific implementations via conditional compilation (`Q_OS_WIN`, `Q_OS_LINUX`, `Q_OS_MAC`):
  - **Windows**: `GetSystemTimes` (kernel, user, idle `FILETIME` conversion) + `GlobalMemoryStatusEx`.
  - **Linux**: `/proc/stat` file parsing + `sysinfo(&memInfo)` kernel structures.
  - **macOS**: `mach/mach_host.h` host statistics + `vm_statistics64`.
- **Real-Time Data Visualization with Qt Charts**:
  - `CpuWidget`: Donut pie chart (`QPieSeries` with `holeSize=0.35`) streaming live CPU load vs. free capacity.
  - `MemoryWidget`: Smooth scrolling area chart (`QAreaSeries` over `QLineSeries`) rendered with linear color gradients and fixed sliding window buffers (`CHART_X_RANGE_COUNT = 50`).
- **Modern Slate-Dark QSS Palette**: Deep navy/slate background (`#0F172A`), translucent card frames (`#1E293B`), cyber-blue accents (`#2563EB` → `#3B82F6`), and antialiased chart rendering.

> [!NOTE]
> **Qt 6 Compatibility & `QtCharts` Namespacing:**  
> - For **Qt 6**, the official Qt Charts module repository is available at [github.com/qt/qtcharts](https://github.com/qt/qtcharts).  
> - In this project, the implementation is built and verified with **Qt 6.2.3+**. Starting with modern Qt 6.2+ versions, the `QT_CHARTS_USE_NAMESPACE` or explicit `QtCharts::` scope prefix is **no longer required**, as charts classes are directly exposed in global scope alongside standard Qt headers.

<details>
<summary>📸 <b>View Chapter 2 Before & After Screenshots</b></summary>
<br/>

| Classic Book Style (Base) | Modernized Output (Final) |
|:---:|:---:|
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_old.png" width="380" alt="Old CPU Only"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_new.png" width="380" alt="New CPU Only"/> |
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_old.png" width="380" alt="Old CPU + Mem Solid"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_new.png" width="380" alt="New CPU + Mem Solid"/> |
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_grad_old.png" width="380" alt="Old CPU + Mem Gradient"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_grad_new.png" width="380" alt="New CPU + Mem Gradient"/> |

</details>

---

## 🛠️ Build & Run

### Prerequisites
- **Compiler**: MSVC 2019/2022, GCC 11+, or Clang 14+ (C++17/20 capable)
- **Framework**: Qt 5.15+ or Qt 6.x (`QtWidgets`, `QtCore`, `QtGui`, `QtCharts`)
- **IDE**: Visual Studio (with Qt Visual Studio Tools extension) or Qt Creator

### Building with Visual Studio
1. Install and activate the **Qt Visual Studio Tools** extension.
2. Register your Qt installation path in `Extensions` → `Qt VS Tools` → `Qt Versions`.
3. Open the solution file (e.g., `fasl 1/todo/todo/todo.sln` or `fasl 2/ch02-sysinfo/ch02-sysinfo.sln`).
4. Select `x64` / `Release` (or `Debug`) and build with `Ctrl + Shift + B`.

---

## 👨‍💻 Author & Maintainer

**Mahbod BemaniCham**  
Electrical Engineering Student — Amirkabir University of Technology (Tehran Polytechnic)  
- 🐙 **GitHub:** [@Mahbodbe](https://github.com/Mahbodbe)

---

## 📄 License

This repository is maintained for educational and research purposes under the [MIT License](LICENSE).
