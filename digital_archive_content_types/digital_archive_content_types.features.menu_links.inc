<?php
/**
 * @file
 * digital_archive_content_types.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function digital_archive_content_types_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_collections:islandora/object
  $menu_links['main-menu_collections:islandora/object'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora/object',
    'router_path' => 'islandora',
    'link_title' => 'collections',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'islandora-collections',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_collections:islandora/object',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_about:uuid/node/ac1cb859-2fbc-4c3b-b186-87ea7066c1a9
  $menu_links['user-menu_about:uuid/node/ac1cb859-2fbc-4c3b-b186-87ea7066c1a9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/ac1cb859-2fbc-4c3b-b186-87ea7066c1a9',
    'router_path' => 'uuid',
    'link_title' => 'about',
    'options' => array(
      'identifier' => 'user-menu_about:uuid/node/ac1cb859-2fbc-4c3b-b186-87ea7066c1a9',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_blogs:uuid/node/14e2b6e1-1cb0-4863-bd60-00043ec1d252
  $menu_links['user-menu_blogs:uuid/node/14e2b6e1-1cb0-4863-bd60-00043ec1d252'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/14e2b6e1-1cb0-4863-bd60-00043ec1d252',
    'router_path' => 'uuid',
    'link_title' => 'blogs',
    'options' => array(
      'identifier' => 'user-menu_blogs:uuid/node/14e2b6e1-1cb0-4863-bd60-00043ec1d252',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_community:uuid/node/f2e51519-13ad-44dd-b53b-e9357a662b78
  $menu_links['user-menu_community:uuid/node/f2e51519-13ad-44dd-b53b-e9357a662b78'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/f2e51519-13ad-44dd-b53b-e9357a662b78',
    'router_path' => 'uuid',
    'link_title' => 'community',
    'options' => array(
      'identifier' => 'user-menu_community:uuid/node/f2e51519-13ad-44dd-b53b-e9357a662b78',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_explore:uuid/node/114630a7-b529-40cb-8d3e-583ab83f10c9
  $menu_links['user-menu_explore:uuid/node/114630a7-b529-40cb-8d3e-583ab83f10c9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/114630a7-b529-40cb-8d3e-583ab83f10c9',
    'router_path' => 'uuid',
    'link_title' => 'explore',
    'options' => array(
      'identifier' => 'user-menu_explore:uuid/node/114630a7-b529-40cb-8d3e-583ab83f10c9',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: user-menu_press:uuid/node/f8482b51-948c-46b9-9036-e8ee2fa16a0a
  $menu_links['user-menu_press:uuid/node/f8482b51-948c-46b9-9036-e8ee2fa16a0a'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/f8482b51-948c-46b9-9036-e8ee2fa16a0a',
    'router_path' => 'uuid',
    'link_title' => 'press',
    'options' => array(
      'identifier' => 'user-menu_press:uuid/node/f8482b51-948c-46b9-9036-e8ee2fa16a0a',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_sign-up-for-newsletter:uuid/node/3d42a4d4-dbe9-49d6-ada5-82bf83932fd6
  $menu_links['user-menu_sign-up-for-newsletter:uuid/node/3d42a4d4-dbe9-49d6-ada5-82bf83932fd6'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/3d42a4d4-dbe9-49d6-ada5-82bf83932fd6',
    'router_path' => 'uuid',
    'link_title' => 'sign up for newsletter',
    'options' => array(
      'identifier' => 'user-menu_sign-up-for-newsletter:uuid/node/3d42a4d4-dbe9-49d6-ada5-82bf83932fd6',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_type-size:<front>
  $menu_links['user-menu_type-size:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'type size',
    'options' => array(
      'attributes' => array(
        'id' => 'type-size',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_type-size:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Log out');
  t('User account');
  t('about');
  t('blogs');
  t('collections');
  t('community');
  t('explore');
  t('press');
  t('sign up for newsletter');
  t('type size');

  return $menu_links;
}
