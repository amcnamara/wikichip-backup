### WikiChip Archive

This repository is a partial archival backup of [WikiChip](https://wikichip.org/). The archive is approximately 60% (est.) of the previously public wiki assets, the assets were retrieved from the [Internet Archive](https://web.archive.org/) and have been aggregated in this git repository to better support content search and retrieval.

### Navigating Content

There are a lot of broken links for pages that were never archived, but if you'd like to try to navigate the pages in-place you can run the following:
```
cd ./content
python3 -m http.server 8080 & open "http://localhost:8080"
```

### License

The content of this wiki is being redistributed under its original license: [CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/).

The content for Fuse posts was copyrighted under a non-distributable license so has not been included here, however you can find some of those assets in the [Wayback Machine](https://web.archive.org/web/*/fuse.wikichip.org*).
