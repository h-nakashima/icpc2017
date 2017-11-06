$(document).ready(function() {
    var url = document.URL.replace(/#.*/, '');
    var parts = url.split('/');

    var base = 'http://docs.python.org/3.4/';
    var dirs = ['c-api', 'distributing', 'distutils', 'extending', 'faq', 'howto', 'install', 'installing', 'library', 'reference', 'tutorial', 'using', 'whatsnew'];
    if (dirs.indexOf(parts[parts.length-2]) != -1) {
        base += parts[parts.length-2] + '/';
    }
    base += parts[parts.length-1];
    $('a.headerlink').each(function() {
            var html = '<a class="headerlink" href="' + base + $(this).attr('href') +
                       '" title="原文へのリンク">(原文)</a>';
            $(this).after(html);
        })
});
