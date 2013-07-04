#!/bin/bash
qdbusxml2cpp -v -c SearchIf -p searchif.h:searchif.cpp com.zeal.xml
qdbusxml2cpp -c SearchIfAdaptor -a searchifadaptor.h:searchifadaptor.cpp com.zeal.xml
