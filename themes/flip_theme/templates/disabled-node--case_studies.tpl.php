<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<?php if (!$is_front): ?>
<?php         hide($content['title']); ?>
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="nodewrapper">
  <div class="userpicture"><?php /* add "print $user_picture;" here to fix node user profiles displaying */ ?></div>
  <div class="templatedtitlestyle">  <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?></div>

    <?php if ($display_submitted): ?>
      <div class="submitted">
        <div class="submitted-content-posted">
    <?php print 'Posted ' . $date; ?><br />
    <?php print ' by ' . $name; ?>
      </div>
    <?php endif; ?></div><div class="clearfix"></div>
    <?php
      $may_edit = user_access('edit any conversation content') || (user_access('edit own conversation content') && $uid == $user->uid);
      if ($may_edit) {
        global $base_path;
        print "<div class='edit_your_topic'>  <a href='{$base_path}node/$nid/edit'><i class='icon-edit'></i> " . t('Edit this topic') . "</a></div><br><br>";
      }
    ?>
    <div class="contentarticle"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        //hide($content['field_cs_association']);
        print render($content);
        hide($content['title']);
      ?>
        Patterns identified in this story:<br>
        <?php print render($content['field_cs_association']); ?>

    </div>

<?php

/*
  //returns the field in the correct language
  $field_parent = field_get_items('node', $node, 'field_cs_association');

  //retruns an array which you can render
  $render_array0 = field_view_value('node', $node, 'field_cs_association', $field_parent [0]);
  $render_array1 = field_view_value('node', $node, 'field_cs_association', $field_parent [1]);
  $render_array2 = field_view_value('node', $node, 'field_cs_association', $field_parent [2]);
  $render_array3 = field_view_value('node', $node, 'field_cs_association', $field_parent [3]);
  $render_array4 = field_view_value('node', $node, 'field_cs_association', $field_parent [4]);
  $render_array5 = field_view_value('node', $node, 'field_cs_association', $field_parent [5]);
  $render_array6 = field_view_value('node', $node, 'field_cs_association', $field_parent [6]);
  $render_array7 = field_view_value('node', $node, 'field_cs_association', $field_parent [7]);
  $render_array8 = field_view_value('node', $node, 'field_cs_association', $field_parent [8]);
  $render_array9 = field_view_value('node', $node, 'field_cs_association', $field_parent [9]);

  print render ($render_array0);
  print render ($render_array1);
  print render ($render_array2);
  print render ($render_array3);
  print render ($render_array4);
  print render ($render_array5);
  print render ($render_array6);
  print render ($render_array7);
  print render ($render_array8);
  print render ($render_array9);
*/
//render(field_view_field('node', $node, 'field_cs_association'));
?>




    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>

  </article>
<?php endif; ?>
