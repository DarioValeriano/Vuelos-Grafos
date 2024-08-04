# Algoritmos y Programación II - Trabajo Práctico 4: Grafo de Vuelos

## Descripción del Proyecto

Este proyecto se desarrolló como parte del curso "Algoritmos y Programación II", en el marco del Trabajo Práctico 4. El objetivo del proyecto fue implementar tres aplicaciones diferentes relacionadas con la gestión de aeropuertos y vuelos. Cada integrante del grupo se encargó de uno de los puntos especificados en el enunciado.

## Ejercicio 3: Grafo Dirigido con Pesos para Vuelos

En este ejercicio, implementé una aplicación para gestionar vuelos utilizando un grafo dirigido con pesos. El propósito de esta aplicación es encontrar la combinación de vuelos más económica entre dos aeropuertos dados, basada en la información leída desde un archivo de texto.

### Funcionalidad Implementada

1. **Lectura de Datos**:
   - El programa lee información sobre vuelos desde un archivo `vuelos.txt`, el cual contiene detalles como códigos IATA de partida y destino, nombres de aeropuertos, ciudades, países, y costos de vuelo.

2. **Construcción del Grafo**:
   - Se construye un grafo dirigido donde cada nodo representa un aeropuerto y cada arista tiene un peso correspondiente al costo del vuelo entre dos aeropuertos.
   - El grafo permite modelar la red de vuelos con sus respectivas conexiones y costos.

3. **Algoritmo de Búsqueda de Caminos Mínimos**:
   - El usuario ingresa los códigos IATA de partida y destino, y el programa utiliza un algoritmo de búsqueda para encontrar la combinación de vuelos más económica.
   - Se muestra el detalle de cada vuelo, el costo de cada escala y el costo total del viaje.

4. **Manejo de Conexiones**:
   - En caso de que no haya una combinación de vuelos que conecte los aeropuertos de partida y destino, se informa al usuario que no hay conexiones posibles.

### Habilidades Adquiridas

- **Implementación de Grafos Dirigidos**:
  - Creación y gestión de un grafo dirigido con pesos para representar vuelos entre aeropuertos.
  - Manejo de nodos y aristas en un grafo, y comprensión de la estructura de datos.

- **Algoritmos de Caminos Mínimos**:
  - Aplicación de algoritmos eficientes para encontrar el camino de menor costo en un grafo, como el algoritmo de Dijkstra o A* (dependiendo de la implementación).

- **Lectura y Procesamiento de Archivos**:
  - Extracción y procesamiento de datos de archivos de texto para construir el grafo y realizar búsquedas.

- **Interfaz con el Usuario**:
  - Desarrollo de una interfaz que permite a los usuarios ingresar datos y recibir resultados de manera clara y ordenada.

- **Optimización de Búsquedas**:
  - Implementación de técnicas para optimizar la búsqueda de caminos en grafos y mejorar la eficiencia del algoritmo.

## Conclusión

Este ejercicio ha permitido desarrollar y reforzar habilidades en el manejo de grafos dirigidos con pesos y en la implementación de algoritmos de búsqueda de caminos mínimos. La experiencia adquirida es valiosa para abordar problemas complejos de optimización en redes de transporte y otros campos relacionados.







# Algorithms and Programming II - Practical Work 4: Flight Graph

## Project Description

This project was developed as part of the "Algorithms and Programming II" course, within the framework of Practical Work 4. The goal of the project was to implement three different applications related to airport and flight management. Each team member was responsible for one of the specified tasks.

## Exercise 3: Directed Weighted Graph for Flights

In this exercise, I implemented an application to manage flights using a directed weighted graph. The purpose of this application is to find the most economical flight combination between two given airports, based on the information read from a text file.

### Implemented Functionality

1. **Data Reading**:
   - The program reads flight information from a `vuelos.txt` file, which contains details such as departure and destination IATA codes, airport names, cities, countries, and flight costs.

2. **Graph Construction**:
   - A directed graph is constructed where each node represents an airport and each edge has a weight corresponding to the cost of the flight between two airports.
   - The graph models the network of flights with their respective connections and costs.

3. **Shortest Path Algorithm**:
   - The user inputs departure and destination IATA codes, and the program uses a shortest path algorithm to find the most economical flight combination.
   - The details of each flight, the cost of each leg, and the total trip cost are displayed.

4. **Connection Handling**:
   - If there is no available flight combination connecting the departure and destination airports, the user is informed that no connections are possible.

### Skills Acquired

- **Directed Graph Implementation**:
  - Creation and management of a directed weighted graph to represent flights between airports.
  - Handling nodes and edges in a graph, and understanding graph data structures.

- **Shortest Path Algorithms**:
  - Application of efficient algorithms to find the minimum cost path in a graph, such as Dijkstra’s algorithm or A* (depending on implementation).

- **File Reading and Processing**:
  - Extraction and processing of data from text files to build the graph and perform searches.

- **User Interface**:
  - Development of an interface that allows users to input data and receive results in a clear and organized manner.

- **Search Optimization**:
  - Implementation of techniques to optimize path search in graphs and improve algorithm efficiency.

## Conclusion

This exercise allowed for the development and reinforcement of skills in managing directed weighted graphs and implementing shortest path algorithms. The experience gained is valuable for tackling complex optimization problems in transportation networks and related fields.

