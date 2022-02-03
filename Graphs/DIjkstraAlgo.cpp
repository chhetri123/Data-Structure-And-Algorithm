#include<iostream>
#include<math.h>
#define V 9
using namespace std;

void dijkstra(int graph[V][V], int src);
int minDistance(int dist[],bool visited[]);
void print(int src,int dist[]);

void print(int src ,int dist[]){
	for(int i=0;i<V;i++){
		cout<<src<<" to "<<i<<"= "<<dist[i]<<endl;
	}
}
 int minDistance(int dist[], bool visited[])
{

	int min = INT_MAX, min_vertex;

	for (int i = 0; i < V;i++){


		if(visited[i]==false &&dist[i]<=min){
			// Find the vertex which has minimum distance between unvisted vertex to that vertex
			min = dist[i];
			min_vertex = i;
		}
	}
	return min_vertex;
}

void dijkstra(int graph[V][V], int src){

	int dist[V];
	bool visited[V];
	for(int i=0; i<V; i++){
		visited[i] = false; // Its initialize all the vertices are first unvisted 
		dist[i] =INT_MAX;//Becasue of unvisted we don't know the distance first so we set infinite to all edges frist

	}
	dist[src] = 0; // select source vertix set it to 0;
	for (int vertex = 0; vertex < V-1;vertex++){

	
		int min_vertex = minDistance(dist, visited);
	visited[min_vertex] =true;
	for(int i = 0; i < V; i++){

		if(!visited[i] && graph[min_vertex][i] && dist[min_vertex]!=INT_MAX && dist[min_vertex]+graph[min_vertex][i]<dist[i]){


			// Case should be :
			/* 
			1) vertex should be not visited .
			2)Edge should be connected to that vertex i.e in graph the edge of that vertex should not be 0 if it is not connected 
			3) Current vertex should not have INFINITY distance edge 
			4)Distance of current vertix edge + distance of edge that connect current vertix should be less than its  total distance of next Vertex(it has Infinite value if that vertex is unvisted (most of the case) )
			
			*/
			dist[i] = dist[min_vertex] + graph[min_vertex][i];
		}

	}
	}
	print(src,dist);
}

int main(){



	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	 dijkstra(graph, 1);
	 	return 0;
}