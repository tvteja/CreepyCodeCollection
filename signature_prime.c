// Developer- Minhas Kamal (https://minhaskamal.github.io)
// Intro- Keeps printing prime number (theoretically) forever. Number of characters- 76.
//      Can be made even shorter (65 bytes)- main($,_){for(;$++;)for(_=2;_<$?_:!printf("%i|",$);_=$%_?_+1:0);}
// Details- https://www.quora.com/What-is-the-shortest-and-most-effective-code-ever-written/answer/Minhas-Kamal?srid=u2HNX

main($,_){for($=3;;$+=2)for(_=3;_<=sqrt($)?_:!printf("%i|",$);_=$%_?_+2:0);}
