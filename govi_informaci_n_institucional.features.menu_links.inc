<?php
/**
 * @file
 * govi_informaci_n_institucional.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_informaci_n_institucional_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-organizacion_misin:<front>.
  $menu_links['menu-menu-organizacion_misin:<front>'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Misión',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_misin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-organizacion_visin:<front>.
  $menu_links['menu-menu-organizacion_visin:<front>'] = array(
    'menu_name' => 'menu-menu-organizacion',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Visión',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-organizacion_visin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Misión');
  t('Visión');

  return $menu_links;
}
