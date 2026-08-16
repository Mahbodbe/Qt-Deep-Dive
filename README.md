# 🚀 Qt Deep Dive

<p align="center">
  <img src="https://img.shields.io/badge/Qt-5.x%20%7C%206.x-41CD52?style=for-the-badge&logo=qt&logoColor=white" alt="Qt" />
  <img src="https://img.shields.io/badge/C%2B%2B-17%20%2F%2020-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio%20%7C%20Qt%20Creator-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white" alt="VS" />
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-107C41?style=for-the-badge&logo=windows&logoColor=white" alt="Cross-Platform" />
  <img src="https://img.shields.io/badge/Focus-Production--Grade%20GUI-blueviolet?style=for-the-badge" alt="Production-Grade GUI" />
</p>

<p align="center">
  <b>یک سفر عملی و عمیق به قلب فریم‌ورک Qt و معماری نرم‌افزارهای دسکتاپ مدرن با C++</b><br/>
  از ویجت‌های کلاسیک تا رابط‌های کاربری مدرن QML/Qt Quick، مدیریت حافظه، سیگنال و اسلات‌های پیشرفته، و بازنویسی پوسته‌ها به زبان طراحی امروزی.
</p>

---

## 📌 درباره این مخزن

این مخزن یک مستند زنده و گام‌به‌گام از یادگیری، بازپیاده‌سازی و ارتقای پروژه‌های حرفه‌ای در اکوسیستم **Qt (C++)** است. رویکرد ما صرفاً رونویسی کدهای آموزشی نیست؛ هر پروژه از دل کتاب مرجع استخراج می‌شود، به سبک کدنویسی مدرن C++17/20 بازنویسی شده، پوسته‌های بصری خام آن به یک **Dark Theme مدرن با QSS** ارتقا می‌یابد و معماری اجزا به چالش کشیده می‌شود.

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

## 🗺️ نقشهٔ راه سرفصل‌ها (Roadmap)

| فصل | عنوان مبحث | پروژه / دستاورد | وضعیت |
|:---:|:---|:---|:---:|
| **۰۱** | **شروع کار با Qt Widgets و معماری اجزا** | سامانهٔ مدیریت وظایف مدرن (**Modern ToDo App**) | 🟢 تکمیل‌شده |
| **۰۲** | **زبان استایل‌شیت Qt (QSS) و طراحی ریسپانسیو** | سفارشی‌سازی عمیق ویجت‌ها و ساخت کامپوننت‌های اختصاصی | 🟡 در حال توسعه |
| **۰۳** | **مدل-نما در Qt (Model/View Architecture)** | کار با `QAbstractItemModel`، نماهای جدولی و درختی | ⚪ در برنامه |
| **۰۴** | **چندریسمانی و همزمانی (QThread & Concurrency)** | پردازش پس‌زمینه بدون بلاک شدن حلقه رویداد GUI | ⚪ در برنامه |
| **۰۵** | **شبکه و سوکت‌ها (Qt Network & WebSockets)** | کلاینت/سرور شبکه، درخواست‌های HTTP و JSON API | ⚪ در برنامه |
| **۰۶** | **مقدمه‌ای بر QML و موتور Qt Quick** | رابط‌های پویا، انیمیشن‌های سیال و معماری ترکیبی C++/QML | ⚪ در برنامه |
| **۰۷** | **مدیریت پیشرفته داده در QML** | یکپارچه‌سازی مدل‌های C++ با فرانت‌انت QML | ⚪ در برنامه |
| **۰۸** | **گرافیک، بوم و چندرسانه‌ای (Qt Multimedia & Graphics)** | کار با `QGraphicsView`، افکت‌های بصری و صوت | ⚪ در برنامه |

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
- **پوسته تاریک فوق‌العاده (Dark Cyber Theme)**: بازنویسی ظاهر پیش‌فرض Qt با یک QSS اختصاصی بر پایه گرادیان‌های نئونی (`#6366f1` → `#8b5cf6`)، فیلدهای ورودی نرم، ترانزیشن‌های Hover، اسکرول‌بار اختصاصی و نشانگر وضعیت متغیر.

<details>
<summary>📸 <b>مشاهده اسکرین‌شات‌های تغییر ظاهر (قبل و بعد)</b></summary>
<br/>

| ظاهر کلاسیک اولیه (پایه کتاب) | ظاهر بازطراحی‌شده مدرن (خروجی نهایی) |
|:---:|:---:|
| <img src="fasl%201/todo/todo/image/oldMain.png" width="380"/> | <img src="fasl%201/todo/todo/image/newMain.png" width="380"/> |
| <img src="fasl%201/todo/todo/image/oldAdd.png" width="380"/> | <img src="fasl%201/todo/todo/image/newAdd.png" width="380"/> |
| <img src="fasl%201/todo/todo/image/oldEdit.png" width="380"/> | <img src="fasl%201/todo/todo/image/newEdit.png" width="380"/> |

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
