#include <iostream>
#include "Event.h"
#include "seat.h"
using namespace std;
int main() {
    // 1. إنشاء حدث جديد
    Event event(1, "Music Concert", "2023-12-15", 5, 100.0);  // يحتوي الحدث على 5 مقاعد بسعر 100 لكل مقعد
    event.addEvent("Music Concert", "2023-12-15");
    // 2. حجز بعض المقاعد
    std::cout << "\n--- حجز المقاعد ---\n";
    Seat seat(1, 100, "contact2@example.com");
    //event.reserveSeat(1, "contact1@example.com");  // حجز المقعد 1
    //event.reserveSeat(2, "contact2@example.com");  // حجز المقعد 2

    // 3. عرض إحصائيات الحدث
    std::cout << "\n--- إحصائيات الحدث قبل الإلغاء ---\n";
    event.displayEventStatistics();

    // 4. التحقق مما إذا كان الحدث ممتلئًا
    std::cout << "\n--- التحقق مما إذا كان الحدث ممتلئ ---\n";
    if (event.isEventFull()) {
        std::cout << "الحدث ممتلئ.\n";
    }
    else {
        std::cout << "لا يزال هناك مقاعد متاحة.\n";
    }

    // 5. إلغاء الحدث وإرسال إشعارات للحاضرين
    std::cout << "\n--- إلغاء الحدث ---\n";
    event.cancelEvent();

    // 6. عرض إحصائيات الحدث بعد الإلغاء
    std::cout << "\n--- إحصائيات الحدث بعد الإلغاء ---\n";
    event.displayEventStatistics();

    
    event.saveEventData();

    return 0;
}
