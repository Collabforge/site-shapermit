(function ($) {

Drupal.behaviors.flip_theme = {
  attach: function (context, settings) {
    // Reset iPhone, iPad, and iPod zoom on orientation change to landscape
    var mobile_timer = false;
    if ((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPad/i)) || (navigator.userAgent.match(/iPod/i))) {
      $('#viewport').attr('content', 'width=device-width,minimum-scale=1.0,maximum-scale=1.0,initial-scale=1.0');
      $(window)
        .bind('gesturestart', function () {
          clearTimeout(mobile_timer);
          $('#viewport').attr('content', 'width=device-width,minimum-scale=1.0,maximum-scale=10.0');
        })
        .bind('touchend', function () {
          clearTimeout(mobile_timer);
          mobile_timer = setTimeout(function () {
            $('#viewport').attr('content', 'width=device-width,minimum-scale=1.0,maximum-scale=1.0,initial-scale=1.0');
          }, 1000);
        });
    }
	
    // Header Drupal Search Box
    $('#header [name=search_block_form]')
      .val('Search...')
      .focus(function () {
        $(this).val('');
      });
	  
    // Hide border for image links
    $('a:has(img)').css('border', 'none');
	
	// Equal Column Height
	var width = $(window).width();			
	if (width >= 751) {
		  var currentTallest = 0;
		  var currentRowStart = 0;
		  var rowDivs = new Array();
		  $('div.column').each(function(index) {
		  if(currentRowStart != $(this).position().top) {
		  // we just came to a new row. Set all the heights on the completed row
		  for(currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) rowDivs[currentDiv].height(currentTallest);
		  // set the variables for the new row
		  rowDivs.length = 0; // empty the array
		  currentRowStart = $(this).position().top;
		  currentTallest = $(this).height();
		  rowDivs.push($(this));
		  } else {
		  // another div on the current row. Add it to the list and check if it's taller
		  rowDivs.push($(this));
		  currentTallest = (currentTallest < $(this).height()) ? ($(this).height()) : (currentTallest);
		  }
		  // do the last row
		  for(currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) rowDivs[currentDiv].height(currentTallest);
		  });
	}
  }
}

/**
   * unmodalContent - overridden this function to reload the page after modal login popup closing. 
   * @param content (The jQuery object to remove)
   * @param animation (fadeOut, slideUp, show)
   * @param speed (valid animation speeds slow, medium, fast or # in ms)
   */

  Drupal.CTools.Modal.unmodalContent = function(content, animation, speed)
  {   
      content.each(function(){     
      window.location.reload(true);
    });
  };

})(jQuery);

//Add legacy IE addEventListener support (http://msdn.microsoft.com/en-us/library/ms536343%28VS.85%29.aspx#1)
if (!window.addEventListener) {
  window.addEventListener = function (type, listener, useCapture) {
    attachEvent('on' + type, function() { listener(event) });
  }
}
//end legacy support addition

// Hide Address Bar in Mobile View
addEventListener("load", function() { setTimeout(hideURLbar, 0); }, false);
function hideURLbar(){
  if (window.pageYOffset < 1) {
    window.scrollTo(0, 1);
  }
}
