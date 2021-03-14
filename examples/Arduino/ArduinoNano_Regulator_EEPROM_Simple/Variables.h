///////////////////////////////
// Количество регуляторов
const uint8_t  NumberOfRegulators = 13;
  

///////////////////////////////
// База PIN-ов

const uint8_t PIN_Relay[NumberOfRegulators]={
  5,
  6,
  7
};

// Переменные для таймера на millis();
uint32_t ms;            // Хранит время с начала работы МК

// Хранят время с последнего события
uint32_t msR;           // Служит для опроса датчика температуры с заданным интевалом

const uint32_t TIMEOUT_R = 3000;  // Частота опроса датчика температуры (ставим const если не собираемся менять это значение в скетче)
