# thesaurus_linking

Drupal 7 module for querying sparql endpoints and creating a taxonomy from the result of the query

proper url encoded query for thesaurus

http://vocabs.ceh.ac.uk/evn/tbl/sparql?default-graph-uri=urn:x-evn-pub:envthes&format=text/json&query=prefix%20skos%3A%20%3Chttp%3A%2F%2Fwww.w3.org%2F2004%2F02%2Fskos%2Fcore%23%3E%0Aprefix%20envthes%3A%20%3Chttp%3A%2F%2Fvocabs.lter-europe.net%2FEnvThes%2F%3E%0Aselect%20*%20%7B%0A%20%20values%20%3Fsource%20%7B%20envthes%3A10004%20%7D%0A%20%20%3Fconcept%20skos%3Abroader*%20%3Fsource%20.%0A%20%20%3Fconcept%20skos%3AprefLabel%20%3Flabel%20.%0A%0A%20%20filter%20langMatches(lang(%3Flabel)%2C%20%27en%27)%0A%20%20optional%20%7B%0A%20%20%20%20%3Fconcept%20skos%3AaltLabel%20%3Faltlab%0A%20%20%20%20filter%20langMatches(lang(%3FaltLabel)%2C%20%27en%27)%0A%20%20%7D.%0A%20%20OPTIONAL%20%7B%3Fconcept%20skos%3AaltLabel%20%3Faltlab.%0A%20%20FILTER%20(lang(%3Faltlab)%3D%27en%27).%7D.%0A%20%20OPTIONAL%20%7B%3Fconcept%20skos%3Abroader%20%3Fparent.%0A%20%20%20%20%3Fparent%20skos%3AprefLabel%20%3Fparlab%20.%0A%20%20%7D.%0A%7D%0A

