$(document).ready(function() {
    var url = document.URL.replace(/#.*/, '');
    var parts = url.split('/');

    var base = 'http://docs.python.org/3.3/';
    base += parts[parts.length-2] + '/' + parts[parts.length-1];
    $('a.headerlink').each(function() {
            var html = '<a class="headerlink" href="' + base + $(this).attr('href') +
                       '" title="原文へのリンク">(原文)</a>';
            $(this).after(html);
        })
});
