#!/bin/bash
# Тестовый скрипт для проверки структуры

echo "=== Проверка файлов ==="
echo "Текущая директория: $(pwd)"
echo ""
echo "Файлы .ino:"
find . -name "*.ino" -type f
echo ""
echo "Содержимое папки:"
ls -la
echo ""
echo "Проверка конкретных файлов:"

if [ -f "display_test (1).ino" ]; then
  echo "✅ Файл 'display_test (1).ino' существует"
  echo "Первые 5 строк файла:"
  head -5 "display_test (1).ino"
else
  echo "❌ Файл 'display_test (1).ino' не найден"
fi

echo ""
if [ -f "encode_test.ino" ]; then
  echo "✅ Файл 'encode_test.ino' существует"
else
  echo "❌ Файл 'encode_test.ino' не найден"
fi
