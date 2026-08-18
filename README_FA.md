# 🚀 Qt Deep Dive (نسخه فارسی)

<p align="center">
  <img src="https://img.shields.io/badge/Qt-5.x%20%7C%206.x-41CD52?style=for-the-badge&logo=qt&logoColor=white" alt="Qt" />
  <img src="https://img.shields.io/badge/C%2B%2B-17%20%2F%2020-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio%20%7C%20Qt%20Creator-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white" alt="VS" />
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-107C41?style=for-the-badge&logo=windows&logoColor=white" alt="Cross-Platform" />
  <img src="https://img.shields.io/badge/Focus-Production--Grade%20GUI-blueviolet?style=for-the-badge" alt="Production-Grade GUI" />
</p>

<p align="center">
  <b>یک سفر عملی و عمیق به قلب فریم‌ورک Qt و معماری نرم‌افزارهای دسکتاپ مدرن با C++ و QML</b><br/>
  از ویجت‌های پایه، مانیتورهای سیستمی چندسکویی و پوسته‌های دارک مدرن QSS تا دیتابیس Model/View، چندریسمانی، ارتباط بین‌پردازشی (IPC)، پلاگین‌ها و انیمیشن‌های Qt Quick.
</p>

<p align="center">
  🌐 <b>زبان‌ها:</b> <a href="README.md"><b>English (Primary)</b></a> | <b>🇮🇷 فارسی (صفحه فعلی)</b>
</p>

---

## 📌 درباره این مخزن

این مخزن یک مستند زنده و گام‌به‌گام از یادگیری، بازپیاده‌سازی و ارتقای پروژه‌های حرفه‌ای در اکوسیستم **Qt (C++)** است. رویکرد ما صرفاً رونویسی کدهای آموزشی نیست:
- **فراتر از آموزش‌های ساده**: بازطراحی معماری با استانداردهای C++17/20.
- **مدرن‌سازی بصری**: بازنویسی کامل ظاهر خام و پیش‌فرض ویجت‌ها با **پوسته‌های تاریک اختصاصی (Dark Theme QSS)**.
- **الگوهای امن سیگنال/اسلات**: اتصال‌های مدرن، پردازش برچسب با لامبدا، و مدیریت دقیق مالکیت حافظه در سلسله‌مراتب Qt.

---

## 📚 مراجع و پایه‌های علمی

پروژه‌ها و مسیر آموزشی این مخزن بر دو پایهٔ معتبر و مکمل استوار است:

### ۱. مرجع اولیه و کالبد آموزشی (Primary Foundation)
کتاب مرجع و استانداردی که معماری، سرفصل‌ها و سیر پروژه‌ها را هدایت می‌کند:

> **Mastering Qt 5**  
> *Create stunning cross-platform applications using C++ with Qt Widgets and QML with Qt Quick*  
> **Second Edition**  
> ✍️ **نویسندگان:** Guillaume Lazar و Robin Penea  
> 🏢 **ناشر:** Packt Publishing

### ۲. پایه دوم: همفکری هوش مصنوعی و معماری مدرن
تصمیمات مربوط به مدرن‌سازی ساختار، بازبینی کدها (Code Review)، انتخاب پالت‌های رنگی و طراحی پوسته‌های Dark QSS با همفکری و برین‌استورمینگ دستیارهای مهندسی هوش مصنوعی انجام شده است تا خروجی نهایی منطبق با استانداردهای روز نرم‌افزارهای مهندسی باشد.

---

## 🗺️ نقشه‌راه جامع ۱۴ فصلی پروژه

منطبق بر سرفصل‌های کتاب *Mastering Qt 5 (ویرایش دوم)* به همراه بهینه‌سازی‌ها و مدرن‌سازی اختصاصی:

| # | فصل / موضوع | پروژه محوری / تکنولوژی | بهینه‌سازی و ارتقای مدرن اختصاصی | وضعیت |
|:---:|:---|:---|:---|:---:|
| **۰۱** | **شروع کار با Qt و ویجت‌ها** | **برنامه مدرن مدیریت وظایف** (`todo` + `Task`) | پوسته تاریک سایبرپانکی QSS، گرادینت نئونی، سیگنال‌های لامبدا | 🟢 تکمیل‌شده |
| **۰۲** | **اسرار qmake و توسعه چندسکویی** | **مانیتور سخت‌افزار چندسکویی** (`SysInfo` + Qt Charts) | الگوی Singleton چندریختی، نمودارهای Realtime پای و Area، سازگاری با Qt 6.2+ | 🟢 تکمیل‌شده |
| **۰۳** | **تفکیک پروژه و معماری ماژولار** | **کتابخانه هسته گالری** (Architecture, SQLite, DAO, Models) | ساختار چندپروژه‌ای `.pro` / CMake، لایه DAO تمیز و تست‌پذیر | 🟡 در حال انجام |
| **۰۴** | **تسلط بر رابط کاربری دسکتاپ** | **رابط کاربری گالری دسکتاپ** (Model/View, Custom Delegates) | گرید بندانگشتی ریسپانسیو، انیمیشن‌های نرم | ⚪ برنامه‌ریزی‌شده |
| **۰۵** | **ورود به موبایل (Android/iOS)** | **نسخه موبایل گالری** (QML + Qt Quick) | پشتیبانی از ژست‌های لمسی نیتیو موبایل | ⚪ برنامه‌ریزی‌شده |
| **۰۶** | **رابط‌های روان با QML و Qt Quick** | **موتور بازی مار** (Canvas, QML Canvas, JS Engine) | سیستم ذرات گرافیکی، ماشین حالت ۶۰ فریم بر ثانیه | ⚪ برنامه‌ریزی‌شده |
| **۰۷** | **کتابخانه‌های جانبی و OpenCV** | **برنامه فیلتر و پردازش تصویر** (Qt + OpenCV) | خط لوله پردازش OpenCV، فیلترهای بلادرنگ | ⚪ برنامه‌ریزی‌شده |
| **۰۸** | **توسعه‌پذیری با پلاگین‌های Qt** | **استودیوی ماژولار فیلتر** (`QPluginLoader`, Dynamic DLLs) | پلاگین‌های داینامیک قابل تعویض در زمان اجرا، معماری SDK | ⚪ برنامه‌ریزی‌شده |
| **۰۹** | **چندریسمانی و همزمانی** | **کاوشگر فرکتال مندلبروت** (`QThreadPool`, `QRunnable`) | صف کارهای بدون قفل، ترد رندر مجزا و بدون فریز | ⚪ برنامه‌ریزی‌شده |
| **۱۰** | **ارتباط بین‌پردازشی (IPC)** | **ورکر توزیع‌شده مندلبروت** (`QLocalSocket` / IPC) | پروسس دیمون مستقل، پیام‌رسانی سوکت محلی | ⚪ برنامه‌ریزی‌شده |
| **۱۱** | **سنتز صدا و سریال‌سازی داده** | **درام‌ماشین و سنتزر صوتی** (`QAudioOutput`, JSON/XML) | سریالایزر چندریختی داده، تولید صدای با تاخیر کم | ⚪ برنامه‌ریزی‌شده |
| **۱۲** | **تست خودکار و توسعه آزمون‌محور** | **سوئیت تست درام‌ماشین** (`QTest`, Benchmarks, CI) | تست‌های واحد، اسپای سیگنال‌ها، شبیه‌سازی رویدادهای GUI | ⚪ برنامه‌ریزی‌شده |
| **۱۳** | **بسته‌بندی و انتشار نرم‌افزار** | **نصب‌کننده چندسکویی** (`windeployqt`, `macdeployqt`) | بسته‌های مستقل و قابل توزیع، حل وابستگی‌های داینامیک | ⚪ برنامه‌ریزی‌شده |
| **۱۴** | **کنترل‌های پیشرفته Qt Quick 2** | **سوئیت دسکتاپ مدرن** (QQC2 + Material/Universal) | موتور تم تطبیقی Material / Universal | ⚪ برنامه‌ریزی‌شده |

---

## 📂 پروژه‌های پیاده‌سازی‌شده

### 🔹 فصل ۱: برنامه مدرن مدیریت کارها (`fasl 1 / todo`)

یک نرم‌افزار ماژولار و مبتنی بر کامپوننت برای مدیریت تسک‌ها با سلسله‌مراتب مالکیت امن و استایل تاریک چشم‌نواز.

#### 💡 نکات فنی و معماری:
- **سیگنال و اسلات‌های Type-Safe**: استفاده از سینتکس اشاره‌گر به متد عضو C++ به جای ماکروهای قدیمی:
  ```cpp
  connect(task, &Task::removed, this, &todo::removeTask);
  connect(task, &Task::statusChanged, this, &todo::taskStatusChanged);
  ```
- **کپچر کانتکست با لامبدا**: رهگیری و لاگ رخدادها قبل از بازنشر سیگنال:
  ```cpp
  auto prettyName = [](const QString& taskName) -> QString {
      return "-------- " + taskName.toUpper();
  };
  connect(ui->removeButton, &QPushButton::clicked, [this, name, prettyName] {
      qDebug() << "Trying to remove" << prettyName(name);
      this->emit removed(this);
  });
  ```
- **مدیریت حافظه امن**: مدیریت لیست کارت‌های پویا با `QVector<Task*>` و حذف ایمن در `QVBoxLayout`.
- **استایل Dark مدرن با QSS**: پالت گرادینت نئونی بنفش/نیلی (`#6366f1` → `#8b5cf6`)، فیلدهای ورودی با لبه‌های نرم، وضعیت‌های تعاملی Hover، اسکرول‌بار سفارشی و شمارنده زنده کارهای انجام‌شده.

<details>
<summary>📸 <b>مشاهده تصاویر قبل و بعد فصل ۱</b></summary>
<br/>

| ظاهر کلاسیک کتاب (پایه) | خروجی مدرن‌سازی‌شده (نهایی) |
|:---:|:---:|
| <img src="fasl%201/todo/todo/image/oldMain.png" width="380" alt="Old Main"/> | <img src="fasl%201/todo/todo/image/newMain.png" width="380" alt="New Main"/> |
| <img src="fasl%201/todo/todo/image/oldAdd.png" width="380" alt="Old Add"/> | <img src="fasl%201/todo/todo/image/newAdd.png" width="380" alt="New Add"/> |
| <img src="fasl%201/todo/todo/image/oldEdit.png" width="380" alt="Old Edit"/> | <img src="fasl%201/todo/todo/image/newEdit.png" width="380" alt="New Edit"/> |

</details>

---

### 🔹 فصل ۲: مانیتور سخت‌افزاری چندسکویی (`fasl 2 / ch02-sysinfo`)

داشبورد تله‌متری و مانیتورینگ زنده سخت‌افزار برای پایش بار پردازنده (CPU) و مصرف حافظه رم (RAM) در سیستم‌عامل‌های Windows، Linux و macOS با استفاده از APIهای بومی هر سیستم‌عامل، سینگلتون چندریختی و ویژوالایز داده با Qt Charts.

#### 💡 نکات فنی و معماری:
- **الگوی Singleton چندریختی (Polymorphic Singleton)**: تعریف اینترفیس انتزاعی `SysInfo` و اتصال داینامیک آن در زمان اجرا به پیاده‌سازی متناسب با سیستم‌عامل هدف از طریق کامپایل شرطی (`Q_OS_WIN`، `Q_OS_LINUX`، `Q_OS_MAC`):
  - **ویندوز**: استفاده از تابع `GetSystemTimes` (تبدیل ساختار `FILETIME`های کرنل، یوزر و آیدل) به همراه `GlobalMemoryStatusEx`.
  - **لینوکس**: پارس فایل‌های ساختاری سیستم `/proc/stat` به همراه خواندن ساختار کرنل `sysinfo(&memInfo)`.
  - **مک (macOS)**: استخراج آمارهای هاست از `mach/mach_host.h` به همراه ساختار `vm_statistics64`.
- **ترسیم بلادرنگ با Qt Charts**:
  - `CpuWidget`: نمودار پای دوناتی (`QPieSeries` با `holeSize=0.35`) برای نمایش بار لحظه‌ای در برابر ظرفیت آزاد پردازنده.
  - `MemoryWidget`: نمودار مساحتی روان و متحرک (`QAreaSeries` روی `QLineSeries`) با گرادینت خطی رنگ و اسکرول پیوسته داده‌ها در پنجره لغزان ۵۰ نقطه‌ای (`CHART_X_RANGE_COUNT = 50`).
- **پوسته Dark اختصاصی Slate**: پس‌زمینه سرمه‌ای تیره عمیق (`#0F172A`)، فریم‌های شفاف و شیک کارت‌ها (`#1E293B`)، رنگ‌های تاکیدی آبی سایبری (`#2563EB` → `#3B82F6`) و رندر ضددندانه‌ای (Antialiasing) چارت‌ها.

> [!NOTE]
> **نکته سازگاری با Qt 6 و فضای‌نام `QtCharts`:**  
> - برای کاربرانی که از **Qt 6** استفاده می‌کنند، ماژول رسمی Qt Charts از طریق مخزن رسمی [github.com/qt/qtcharts](https://github.com/qt/qtcharts) در دسترس است.  
> - این پروژه با **Qt 6.2.3+** توسعه داده و تست شده است. از نسخه Qt 6.2 به بعد، دیگر نیازی به استفاده از ماکروی `QT_CHARTS_USE_NAMESPACE` یا پیشوند `::QtCharts` پشت کلاس‌های چارت نیست و تمامی کلاس‌ها مستقیماً در اسکوپ گلوبال همانند سایر کلاس‌های استاندارد کیوت در دسترس هستند.

<details>
<summary>📸 <b>مشاهده تصاویر قبل و بعد فصل ۲</b></summary>
<br/>

| ظاهر کلاسیک کتاب (پایه) | خروجی مدرن‌سازی‌شده (نهایی) |
|:---:|:---:|
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_old.png" width="380" alt="Old CPU Only"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_new.png" width="380" alt="New CPU Only"/> |
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_old.png" width="380" alt="Old CPU + Mem Solid"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_new.png" width="380" alt="New CPU + Mem Solid"/> |
| <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_grad_old.png" width="380" alt="Old CPU + Mem Gradient"/> | <img src="fasl%202/ch02-sysinfo/images/main_cpu_mem_grad_new.png" width="380" alt="New CPU + Mem Gradient"/> |

</details>

---

## 🛠️ ساخت و اجرای پروژه (Build & Run)

### پیش‌نیازها
- **کامپایلر**: MSVC 2019/2022 یا GCC 11+ یا Clang 14+ با پشتیبانی از C++17/20
- **فریم‌ورک**: Qt 5.15+ یا Qt 6.x (ماژول‌های `QtWidgets`، `QtCore`، `QtGui` و `QtCharts`)
- **محیط توسعه (IDE)**: Visual Studio (به همراه افزونه Qt Visual Studio Tools) یا Qt Creator

### اجرا در Visual Studio
۱. افزونه **Qt Visual Studio Tools** را نصب و فعال کنید.  
۲. مسیر نصب Qt را در بخش `Extensions` → `Qt VS Tools` → `Qt Versions` ثبت کنید.  
۳. فایل سلوشن فصل مورد نظر را باز کنید (مثلاً `fasl 1/todo/todo/todo.sln` یا `fasl 2/ch02-sysinfo/ch02-sysinfo.sln`).  
۴. پیکربندی را روی `x64` و `Release` (یا `Debug`) قرار داده و با `Ctrl + Shift + B` پروژه را بیلد و اجرا کنید.

---

## 👨‍💻 توسعه‌دهنده و نگه‌دارنده

**مهبد بمان‌ی چم**  
دانشجوی مهندسی برق — دانشگاه صنعتی امیرکبیر (پلی‌تکنیک تهران)  
- 🐙 **گیت‌هاب:** [@Mahbodbe](https://github.com/Mahbodbe)

---

## 📄 مجوز انتشار (License)

این مخزن برای اهداف آموزشی و پژوهشی تحت مجوز [MIT License](LICENSE) منتشر شده است.
