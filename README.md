# Shift_Or_Algorithm
Shift Or Algoritması: Bir veri öğesinin bitlerini belirli bir sayıda sağa ve sola kaydırmak anlamına gelir.
Örneğin, 4 bitlik bir sayı olan 1010 (ondalıkta 10), sol iki yer kaydırıldığında 1000 (ondalıkta 8) olur.

Shift Or Algpritması metin işleme uygulamalarında, arama motorları gibi uygulamalarda ve veri sıkıştırma işlemlerinde sıkça kullanılır.
Ayrıca Shift Or algoritması, DNA dizilerindeki belirli motiflerin (genetik işaretler) tespitinde de kullanılır. Bu algoritma, genomik verilerin analizinde de sıklıkla kullanılan bir araçtır.

Shift Or algoritması, örüntüyü metinde ararken lineer bir zaman karmaşıklığına sahiptir. Yani, örüntü uzunluğuna (m) ve metin uzunluğuna (n) bağlı olarak O(m+n) zamanda çalışır.

Bu analiz, maske dizisinin oluşturulması için yapılan ilk iki döngü (her biri O(CHAR_BITS) zaman karmaşıklığına sahip) ve ana döngünün her adımında yapılan işlemler (birkaç bit operasyonu) ile elde edilir. Bu işlemlerin tamamı, lineer zaman karmaşıklığına sahip olduğundan, Shift Or algoritması da lineer zaman karmaşıklığına sahip bir algoritmadır.

Dev C++ IDE'sini kullanarak C dilinde algoritmamı oluşturdum.  
