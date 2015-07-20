

<div class="container container-annon">
  <div class="container-inner">
    <div class="ui-header">

            <?php
            if (!empty($title)) {
              ?>

              <h1 class="ui-title">
                 <?php echo $title; ?>
              </h1>

              <?php
            }
            ?>

            <?php
            if (!empty($subtitle)) {
              ?>

              <h2 class="ui-subtitle">
                <?php echo $subtitle; ?>
              </h2>

              <?php
            }
            ?>

    </div>

    <div class="ui-content">

            <?php
            if (!empty($messages)) {
              ?>

              <div class="ui-messages">
                <?php echo render($messages); ?>
              </div>

              <?php
            }
            ?>
            <?php
            if (!empty($page['content_upper'])) {
              ?>

              <div class="ui-content-main">
                <?php print render($page['content_upper']); ?>
              </div>

              <?php
            }
            ?>

    </div>

    <div class="ui-footer">
    Got an account? <a href="https://discuss.shapermit.com/users/sign_in?return_to=https%3A%2F%2Fshapermit.com%2Fdiscuss-and-act">Login Now</a><br>
    Don't have an account? <a href="/user/register">Register Now</a><br>
    Forgot your password? <a href="/user/password">Reset Password</a>

             <?php
         		
            if (!empty($logo)) {
              ?>

              <div class="ui-logo">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                  &nbsp;
                </a>
              </div>

              <?php
            }
            ?>
       	<script>
if ($('#user-profile-form').length) {
    $('.ui-footer').hide();
}


if ($(".page-user-login").length) {
$(document).ready(function() {
            $(".ui-title").show(function () {
               $(this).html("#shapeRMIT Login");
            });
         });
}


if ($(".page-user-edit").length) {
$(document).ready(function() {
            $(".ui-title").show(function () {
               $(this).html("Set your password");
            });
         });
}

        
if ($(".page-user-edit").length) {
$(document).ready(function() {
            $(".ui-title").show(function () {
               $(this).html("Set your password");
            });
         });
}


</script>

    </div>
  </div> 
</div>
















