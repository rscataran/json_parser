# json_parser
Import custom json data to Drupal

Dependencies
------------

* Features
* Ctools
* Feeds
* Feeds_ex
* Text

You need to download [jsonpath](https://jsonpath.googlecode.com/svn/trunk/src/php/jsonpath.php) and put in the `sites/all/libraries/jsonpath` folder.

Usage
-----

To import the data from the json file, go to this url:
http://DOMAIN/import/old_news

Note:
-----

You need to fix the json file as the current exported file has a syntax error due to illegal use of escape.
