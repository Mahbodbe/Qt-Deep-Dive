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
> ✍️ **نویسندگان:** Guillaume Lazar & Robin Penea  
> 🏢 **ناشر:** Packt Publishing

### ۲. مرجع ثانویه و لایهٔ مدرن‌سازی (Secondary Foundation & AI Collaboration)
پیشنهادها، بازبینی معماری، بهینه‌سازی الگوهای مدرن C++، و طراحی استایل‌شیت‌های حرفه‌ای (QSS Dark Themes) حاصل هم‌فکری و ایده‌پردازی مشترک با **دستیارهای هوش مصنوعی (AI-Assisted Architecture & Review)** و بررسی مستندات رسمی اکوسیستم Qt است.

---

## 🗺️ نقشهٔ راه جامع ۱۴ فصل (Roadmap)

منطبق بر سرفصل‌های کتاب *Mastering Qt 5 (ویرایش دوم)* + ارتقاهای مدرن اختصاصی:

| فصل | عنوان مبحث | پروژه / فناوری محوری | ارتقای اختصاصی (AI / مدرن‌سازی) | وضعیت |
|:---:|:---|:---|:---|:---:|
| **۰۱** | **شروع کار با ویجت‌ها و معماری اجزا** | سامانه مدیریت وظایف مدرن (**Modern ToDo App**) | پوسته دارک نئونی با QSS، لامبدا در connect | 🟢 تکمیل‌شده |
| **۰۲** | **رازهای qmake و پایش سخت‌افزار** | مانیتور سیستمی چندسکویی (**SysInfo + Qt Charts**) | خواندن بلادرنگ CPU/RAM روی ویندوز، لینوکس و مک | 🟡 در حال توسعه |
| **۰۳** | **ساختاردهی و تقسیم پروژه (DAO / DB)** | هستهٔ گالری تصویر (**Gallery Core + SQLite DAO**) | معماری تمیز لایه دسترسی داده (DAO) و تست‌پذیری | ⚪ در برنامه |
| **۰۴** | **طراحی رابط کاربری دسکتاپ** | رابط گالری دسکتاپ (**Model/View + Custom Delegates**) | چیدمان ریسپانسیو و نماهای سفارشی تصاویر | ⚪ در برنامه |
| **۰۵** | **توسعه برای موبایل (Android/iOS)** | گالری موبایل با **Qt Quick / QML** | انطباق با ژست‌های لمسی و رابط موبایلی نیتیو | ⚪ در برنامه |
| **۰۶** | **رابط‌های روان و پویای QML** | موتور بازی Snake با **Canvas و موتور JS** | موتور انیمیشن ۶۰ فریم و استیت ماشین روان | ⚪ در برنامه |
| **۰۷** | **یکپارچه‌سازی کتابخانه‌های جانبی** | پردازش تصویر با **Qt + OpenCV Integration** | پایپ‌لاین فیلترهای بلادرنگ تصویر با OpenCV | ⚪ در برنامه |
| **۰۸** | **معماری ماژولار و پلاگین‌ها** | استودیوی ماژولار فیلتر با **`QPluginLoader`** | معماری DLLهای پلاگین و بارگذاری پویا | ⚪ در برنامه |
| **۰۹** | **چندریسمانی و همزمانی** | رندرر فرکتال مندلبروت با **`QThreadPool`** | استخر نخ‌های موازی و رندر بدون بلاک GUI | ⚪ در برنامه |
| **۱۰** | **ارتباط بین‌پردازشی (IPC)** | محاسبات توزیع‌شده با **`QLocalSocket` / IPC** | پروسه کارگر مستقل و پیام‌رسانی سوکت محلی | ⚪ در برنامه |
| **۱۱** | **ترکیب صدا و سریال‌سازی داده** | ماشین درام پیشرفته (**Audio + Polymorphic Serializer**) | سریال‌سازی داده به JSON/XML/باینری و خروجی صوت | ⚪ در برنامه |
| **۱۲** | **تست خودکار و TDD** | مجموعه تست‌های جامع با **`QTest` و Benchmark** | تست‌های واحد، تست سیگنال‌ها و شبیه‌سازی رویداد GUI | ⚪ در برنامه |
| **۱۳** | **بسته‌بندی و توزیع نرم‌افزار** | پکیجینگ نصاب با **windeployqt / macdeployqt** | تولید فایل نصاب آماده انتشار و حل وابستگی‌ها | ⚪ در برنامه |
| **۱۴** | **کنترل‌های مدرن QQC2** | اپلیکیشن مدرن با **Qt Quick Controls 2 (Material)** | سوییچ پویا بین تم‌های مدرن Material و Universal | ⚪ در برنامه |

---

## 📂 پروژه‌های پیاده‌سازی‌شده

### 🔹 فصل ۱: سامانه مدیریت وظایف مدرن (`fasl 1 / todo`)

بازپیاده‌سازی و ارتقای پروژه فصل اول کتاب با تمرکز بر تعامل چند شیء (`todo` ↔ `Task`) و پوسته‌ریزی کاملاً مدرن.

#### 💡 مفاهیم پیاده‌سازی‌شده:
- **سیگنال و اسلات مدرن**: ارتباط امن با Signal/Slot C++11 و بدون ماکروهای قدیمی (`connect(..., &Task::removed, ...)`)
- **لامبداهای مدرن در Connect**: بکارگیری C++ Lambda برای گرفتن کانتکست و پردازش برچسب قبل از ارسال سیگنال:
  ```cpp
  auto prettyName = [](const QString& taskName) -> QString {
      return "-------- " + taskName.toUpper();
  };
  connect(ui->removeButton, &QPushButton::clicked, [this, name, prettyName] {
      qDebug() << "Trying to remove" << prettyName(name);
      this->emit removed(this);
  });
  ```
- **مدیریت حافظه در سلسله‌مراتب Qt**: اتصال والد/فرزند (`QObject` parent-child hierarchy) و پاکسازی امن ویجت‌ها با `deleteLater` و مدیریت لیست پویا (`QVector<Task*>`).
- **ترکیب رابط‌ها (Composite Widgets)**: پیاده‌سازی کامپوننت مستقل `Task` با UI اختصاصی و تعبیه پویا در لایوت صفحه اصلی (`QVBoxLayout`).
- **پوسته تاریک اختصاصی (Dark Theme)**: بازنویسی ظاهر پیش‌فرض Qt با یک QSS اختصاصی بر پایه گرادیان‌های نئونی (`#6366f1` → `#8b5cf6`)، فیلدهای ورودی نرم، ترانزیشن‌های Hover، اسکرول‌بار اختصاصی و نشانگر وضعیت متغیر.

<details>
<summary>📸 <b>مشاهده اسکرین‌شات‌های تغییر ظاهر (قبل و بعد)</b></summary>
<br/>

| ظاهر کلاسیک اولیه (پایه کتاب) | ظاهر بازطراحی‌شده مدرن (خروجی نهایی) |
|:---:|:---:|
| <img src="fasl%201/todo/todo/image/oldMain.png" width="380" alt="Old Main"/> | <img src="fasl%201/todo/todo/image/newMain.png" width="380" alt="New Main"/> |
| <img src="fasl%201/todo/todo/image/oldAdd.png" width="380" alt="Old Add"/> | <img src="fasl%201/todo/todo/image/newAdd.png" width="380" alt="New Add"/> |
| <img src="fasl%201/todo/todo/image/oldEdit.png" width="380" alt="Old Edit"/> | <img src="fasl%201/todo/todo/image/newEdit.png" width="380" alt="New Edit"/> |

</details>

---

## 🛠️ ساخت و اجرا (Build & Run)

### پیش‌نیازها
- **کامپایلر**: MSVC 2019/2022 یا GCC 11+ / Clang 14+ (با پشتیبانی از C++17 به بالا)
- **فریم‌ورک Qt**: نسخهٔ Qt 5.15+ یا Qt 6.x (ماژول‌های `QtWidgets` و `QtCore`)
- **محیط توسعه**: Visual Studio (با افزونهٔ Qt VS Tools) یا Qt Creator

### نحوهٔ بیلد در Visual Studio
1. افزونهٔ **Qt Visual Studio Tools** را در ویژوال استودیو فعال کنید.
2. مسیر نسخهٔ Qt خود را در تنظیمات افزونه مشخص کنید (`Qt Options` → `Add`).
3. فایل Solution پروژه (مثلاً `fasl 1/todo/todo/todo.sln`) را باز کنید.
4. پروژه را روی پیکربندی `x64 / Release` یا `x64 / Debug` تنظیم کرده و `Ctrl + Shift + B` بزنید.

---

## 👨‍💻 نویسنده و توسعه‌دهنده

**مهبد بمان‌ی‌چم (Mahbod BemaniCham)**  
دانشجوی مهندسی برق — دانشگاه صنعتی امیرکبیر (پلی‌تکنیک تهران)  
- 🐙 **GitHub:** [@Mahbodbe](https://github.com/Mahbodbe)

---

## 📄 لایسنس

این مخزن برای مقاصد آموزشی و پژوهشی ایجاد شده و کدهای آن تحت مجوز [MIT License](LICENSE) باز و در دسترس است.
